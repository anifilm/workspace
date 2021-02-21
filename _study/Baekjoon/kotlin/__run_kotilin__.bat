@echo off
if "%1" == "" kotlinc main.kt -include-runtime -d main.jar
if NOT "%1" == "" kotlinc %1 -include-runtime -d main.jar
java -jar main.jar
pause
del *.jar
