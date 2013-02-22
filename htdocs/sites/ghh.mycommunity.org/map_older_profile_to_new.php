<?php

$conf = array();
require('local.settings.php');

$connection = new PDO($db_url['default'], 'root', 'hotmail');
$connection->query('USE mc');

// Append "mission statement" and "contact information" to "about".
$aboutId = 3;
$contactInformationId = 7;
$missionStatementId = 5;

$stmt = $connection->prepare("SELECT * FROM profile_values WHERE fid=$contactInformationId OR fid=$missionStatementId");
$stmt->execute();
foreach ($stmt->fetchAll() as $row) {
    $uid = $row['uid'];

    if (empty($row['value']))
        continue;

    $stmtInner = $connection->prepare("SELECT * FROM profile_values WHERE fid=$aboutId AND uid=$uid");
    $stmtInner->execute();
    $aboutRow = $stmtInner->fetch();
    if ($aboutRow) {
        // Append with break lines.
        $value = $aboutRow['value'] . '<br /><br />' . $row['value'];

        $updateStmt = $connection->prepare("UPDATE profile_values SET value=:value WHERE fid=$aboutId AND uid=$uid");
        $updateStmt->execute(array(':value' => $value));
    }
}

// Backup some fields.
$memberListId = 6;
$zodiacId = 17;
$interestsId = 12;
$favoriteBooksId = 13;
$favoriteMoviesId = 14;
$favoriteTVId = 15;
$pleaseSpecifyId = 20;

$fh = fopen('backup.csv', 'wb');

$stmt = $connection->prepare("SELECT * FROM profile_values WHERE fid IN ($memberListId, $zodiacId, $interestsId, $favoriteBooksId, $favoriteMoviesId, $favoriteTVId, $pleaseSpecifyId)");
$stmt->execute();
foreach ($stmt->fetchAll() as $row) {
    fputcsv($fh, array($row['fid'], $row['uid'], $row['value']));
}
fclose($fh);

// Mapping
$realNameId = 21;
$firstNameId = 26;
$lastNameId = 28;

$stmt = $connection->prepare("SELECT * FROM profile_values WHERE fid=$realNameId");
$stmt->execute();

foreach ($stmt->fetchAll() as $row) {
    $parts = explode(' ', $row['value']);
    $uid = $row['uid'];

    if (count($parts) < 2) {
        continue;
    }

    $updateStmt = $connection->prepare("INSERT INTO profile_values (fid, uid, value) VALUES ($firstNameId, $uid, :value)");
    $updateStmt->execute(array(':value' => $parts[0]));

    $updateStmt = $connection->prepare("INSERT INTO profile_values (fid, uid, value) VALUES ($lastNameId, $uid, :value)");
    $updateStmt->execute(array(':value' => $parts[1]));
}

// Copying
$aboutMeId = 11;
$organizationNameId = 2;
$occupationId = 18;

$employerId = 23;
$positionId = 29;
$oneLineIntroId = 31;

$copyValueTo = function($fromId, $toId) use (&$connection) {
    $stmt = $connection->prepare("SELECT * FROM profile_values WHERE fid=$fromId");
    $stmt->execute();

    foreach ($stmt->fetchAll() as $row) {
        $stmt = $connection->prepare("SELECT * FROM profile_values WHERE fid=$toId");
        $stmt->execute();
        $result2 = $stmt->fetch();

        $uid = $row['uid'];

        if (!$result2) {
            $updateStmt = $connection->prepare("INSERT INTO profile_values (fid, uid, value) VALUES ($toId, $uid, :value)");
            $updateStmt->execute(array(':value' => $row['value']));
        }
    }
};

$copyValueTo($organizationNameId, $employerId);
$copyValueTo($occupationId, $positionId);
$copyValueTo($aboutMeId, $oneLineIntroId);