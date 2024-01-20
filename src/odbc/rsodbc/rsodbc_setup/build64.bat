@echo off
echo Building 64 bit Windows Redshift ODBC Setup DLL


echo Setting environment variables
dir "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvarsall.bat"

devenv /Rebuild "Release|x64" rsodbcsetup.sln

echo Done building 64 bit Windows Redshift ODBC Setup DLL


