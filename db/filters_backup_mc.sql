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
-- Table structure for table `wysiwyg`
--

DROP TABLE IF EXISTS `wysiwyg`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `wysiwyg` (
  `format` int(11) NOT NULL DEFAULT '0',
  `editor` varchar(128) NOT NULL DEFAULT '',
  `settings` text,
  PRIMARY KEY (`format`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `wysiwyg`
--

LOCK TABLES `wysiwyg` WRITE;
/*!40000 ALTER TABLE `wysiwyg` DISABLE KEYS */;
INSERT INTO `wysiwyg` VALUES (1,'ckeditor','a:20:{s:7:\"default\";i:1;s:11:\"user_choose\";i:0;s:11:\"show_toggle\";i:1;s:5:\"theme\";s:8:\"advanced\";s:8:\"language\";s:2:\"en\";s:7:\"buttons\";a:0:{}s:11:\"toolbar_loc\";s:3:\"top\";s:13:\"toolbar_align\";s:4:\"left\";s:8:\"path_loc\";s:6:\"bottom\";s:8:\"resizing\";i:1;s:11:\"verify_html\";i:1;s:12:\"preformatted\";i:0;s:22:\"convert_fonts_to_spans\";i:1;s:17:\"remove_linebreaks\";i:1;s:23:\"apply_source_formatting\";i:0;s:27:\"paste_auto_cleanup_on_paste\";i:0;s:13:\"block_formats\";s:32:\"p,address,pre,h2,h3,h4,h5,h6,div\";s:11:\"css_setting\";s:5:\"theme\";s:8:\"css_path\";s:0:\"\";s:11:\"css_classes\";s:0:\"\";}'),(2,'ckeditor','a:20:{s:7:\"default\";i:1;s:11:\"user_choose\";i:0;s:11:\"show_toggle\";i:1;s:5:\"theme\";s:8:\"advanced\";s:8:\"language\";s:2:\"en\";s:7:\"buttons\";a:1:{s:7:\"default\";a:26:{s:4:\"Bold\";i:1;s:6:\"Italic\";i:1;s:9:\"Underline\";i:1;s:6:\"Strike\";i:1;s:11:\"JustifyLeft\";i:1;s:13:\"JustifyCenter\";i:1;s:12:\"JustifyRight\";i:1;s:12:\"JustifyBlock\";i:1;s:12:\"BulletedList\";i:1;s:12:\"NumberedList\";i:1;s:7:\"Outdent\";i:1;s:6:\"Indent\";i:1;s:4:\"Undo\";i:1;s:4:\"Redo\";i:1;s:4:\"Link\";i:1;s:6:\"Unlink\";i:1;s:5:\"Image\";i:1;s:9:\"TextColor\";i:1;s:7:\"BGColor\";i:1;s:3:\"Cut\";i:1;s:4:\"Copy\";i:1;s:5:\"Paste\";i:1;s:12:\"RemoveFormat\";i:1;s:4:\"Font\";i:1;s:8:\"FontSize\";i:1;s:6:\"Styles\";i:1;}}s:11:\"toolbar_loc\";s:3:\"top\";s:13:\"toolbar_align\";s:4:\"left\";s:8:\"path_loc\";s:6:\"bottom\";s:8:\"resizing\";i:1;s:11:\"verify_html\";i:1;s:12:\"preformatted\";i:0;s:22:\"convert_fonts_to_spans\";i:1;s:17:\"remove_linebreaks\";i:1;s:23:\"apply_source_formatting\";i:0;s:27:\"paste_auto_cleanup_on_paste\";i:0;s:13:\"block_formats\";s:32:\"p,address,pre,h2,h3,h4,h5,h6,div\";s:11:\"css_setting\";s:5:\"theme\";s:8:\"css_path\";s:0:\"\";s:11:\"css_classes\";s:0:\"\";}'),(3,'',NULL),(4,'',NULL);
/*!40000 ALTER TABLE `wysiwyg` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `filters`
--

DROP TABLE IF EXISTS `filters`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `filters` (
  `fid` int(11) NOT NULL AUTO_INCREMENT,
  `format` int(11) NOT NULL DEFAULT '0',
  `module` varchar(64) NOT NULL DEFAULT '',
  `delta` tinyint(4) NOT NULL DEFAULT '0',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`fid`),
  UNIQUE KEY `fmd` (`format`,`module`,`delta`),
  KEY `list` (`format`,`weight`,`module`,`delta`)
) ENGINE=MyISAM AUTO_INCREMENT=31 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `filters`
--

LOCK TABLES `filters` WRITE;
/*!40000 ALTER TABLE `filters` DISABLE KEYS */;
INSERT INTO `filters` VALUES (19,1,'filter',0,1),(20,1,'filter',1,2),(18,1,'filter',2,0),(23,2,'filter',1,1),(22,2,'filter',2,0),(30,3,'php',0,0),(26,4,'filter',1,-9),(24,2,'filter',3,10),(21,1,'filter',3,10),(25,4,'filter',0,-10),(27,4,'filter',2,-8),(28,4,'femail',0,-7),(29,4,'femail',1,-6);
/*!40000 ALTER TABLE `filters` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `filter_formats`
--

DROP TABLE IF EXISTS `filter_formats`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `filter_formats` (
  `format` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL DEFAULT '',
  `roles` varchar(255) NOT NULL DEFAULT '',
  `cache` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`format`),
  UNIQUE KEY `name` (`name`)
) ENGINE=MyISAM AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `filter_formats`
--

LOCK TABLES `filter_formats` WRITE;
/*!40000 ALTER TABLE `filter_formats` DISABLE KEYS */;
INSERT INTO `filter_formats` VALUES (1,'Filtered HTML',',1,2,',1),(2,'Full HTML','',1),(3,'PHP code','',0),(4,'Femail mail message',',2,',0);
/*!40000 ALTER TABLE `filter_formats` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2012-05-20 23:24:07
