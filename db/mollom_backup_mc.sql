-- MySQL dump 10.13  Distrib 5.1.44, for apple-darwin8.11.1 (i386)
--
-- Host: localhost    Database: mc_local
-- ------------------------------------------------------
-- Server version	5.1.44

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `mollom_form`
--

DROP TABLE IF EXISTS `mollom_form`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `mollom_form` (
  `form_id` varchar(255) NOT NULL DEFAULT '',
  `mode` tinyint(4) NOT NULL DEFAULT '0',
  `enabled_fields` text,
  `module` varchar(255) NOT NULL DEFAULT '',
  `checks` text,
  `discard` tinyint(4) NOT NULL DEFAULT '1',
  `strictness` varchar(8) NOT NULL DEFAULT 'normal',
  `moderation` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`form_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `mollom_form`
--

LOCK TABLES `mollom_form` WRITE;
/*!40000 ALTER TABLE `mollom_form` DISABLE KEYS */;
set autocommit=0;
INSERT INTO `mollom_form` VALUES ('comment_form',1,'a:2:{i:0;s:7:\"subject\";i:1;s:7:\"comment\";}','comment','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('contact_mail_page',2,'a:2:{i:0;s:7:\"subject\";i:1;s:7:\"message\";}','contact','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('contact_mail_user',2,'a:2:{i:0;s:7:\"subject\";i:1;s:7:\"message\";}','contact','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('event_node_form',2,'a:2:{i:0;s:5:\"title\";i:1;s:4:\"body\";}','node','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('file_node_form',2,'a:1:{i:0;s:5:\"title\";}','node','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('forum_node_form',2,'a:2:{i:0;s:5:\"title\";i:1;s:4:\"body\";}','node','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('nnews_node_form',2,'a:2:{i:0;s:5:\"title\";i:1;s:4:\"body\";}','node','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('npage_node_form',2,'a:2:{i:0;s:5:\"title\";i:1;s:4:\"body\";}','node','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('user_pass',1,'a:0:{}','user','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('user_register',1,'a:0:{}','user','a:1:{i:0;s:4:\"spam\";}',1,'normal',0),('video_node_form',2,'a:2:{i:0;s:5:\"title\";i:1;s:4:\"body\";}','node','a:1:{i:0;s:4:\"spam\";}',1,'normal',0);
/*!40000 ALTER TABLE `mollom_form` ENABLE KEYS */;
UNLOCK TABLES;
commit;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2012-05-18 14:24:19
