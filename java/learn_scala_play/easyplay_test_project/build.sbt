name := """easyplay_test_project"""
organization := "com.example"

version := "1.0-SNAPSHOT"

lazy val root = (project in file(".")).enablePlugins(PlayScala)

scalaVersion := "2.13.6"

libraryDependencies ++= Seq(
  guice,
  jdbc,
  cache,
  ws,
  "com.h2database" % "h2" % "1.4.199",
  "org.scalatestplus.play" %% "scalatestplus-play" % "5.0.0" % Test,
  "com.typesafe.play" %% "anorm" % "2.5.0",
  "mysql" % "mysql-connector-java" % "5.1.34"
)
