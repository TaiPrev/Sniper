@echo off
REM //-------------- set up variable --------------
setlocal
set ROOT_DIR=%~dp0

set "OutPath=%cd%\Build"
set "UEVer=4.24"

set "ToolPath=%PROGRAMFILES%\Epic Games\UE_%UEVer%\Engine\Build\BatchFiles"
IF NOT EXIST "%ToolPath%" (
    echo "Unreal Engine build path %ToolPath% was not found"
    goto :failed
)

echo Using ToolPath = %ToolPath%
echo Using OutPath = %OutPath%

for %%f in (*.uproject) do (
    echo Packaging: %%f

    REM //------- Build -----------
    "%ToolPath%\Build" "%%~nfEditor" Win64 Development -WarningsAsErrors "%cd%\%%f" -WaitMutex
    if ERRORLEVEL 1 goto :failed

    IF EXIST "%OutPath%\Build" (
        rmdir /s /q "%OutPath%\WindowsNoEditor"
    )

    REM //------- Packaging ---------
    "%ToolPath%\RunUAT" BuildCookRun -project="%cd%\%%f" -noP4 -clientconfig=Development -serverconfig=Shipping -nocompileeditor -archive -archivedirectory="%OutPath%" -utf8output -platform=Win64 -targetplatform=Win64 -cook -build -compressed -stage -pak -prereqs -rocket -package
    if ERRORLEVEL 1 goto :failed
)

goto :done

:failed
echo "Error occurred while packaging"
exit /b 1

:done
PAUSE
