@echo off

setlocal
echo Setting up Unreal Engine 4 project files...
echo Deleting files

@RD /S /Q ".vs"
@RD /S /Q "Binaries"
@RD /S /Q "Saved"
@RD /S /Q "Intermediate"
DEL /S /Q "Sniper.sln"

echo Files Deleted correctly!

del /q gen_temp.txt
powershell -command "& { (Get-ItemProperty 'Registry::HKEY_CLASSES_ROOT\Unreal.ProjectFile\shell\rungenproj' -Name 'Icon' ).'Icon' }" > gen_temp.txt
set /p gen_bin=<gen_temp.txt
%gen_bin% /projectfiles %cd%\Sniper.uproject
del /q gen_temp.txt

echo Files Created correctly!


PAUSE