@echo off
echo Building 64 bit Windows Redshift ODBC Setup DLL


echo Setting environment variables
rem call "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvars64.bat"

rem devenv /Rebuild "Release|x64" rsodbcsetup.sln
msbuild rsodbcsetup.sln /t:Rebuild /p:Configuration=Release /p:Platform=x64  /verbosity:detailed

echo Done building 64 bit Windows Redshift ODBC Setup DLL


