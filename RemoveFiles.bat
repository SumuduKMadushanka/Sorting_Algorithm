:: This batch script Removes object files and SortDemo.exe file
@echo OFF

:: Remove object files
cd ./object_files
echo Removing object files...
if exist *.o (
    DEL *.o
    echo Object files removed
) else (
    echo Object files don't exist
)

cd ..
:: Remove SortDemo.exe file
echo Removing SortDemo.exe file
if exist SortDemo.exe (
    DEL SortDemo.exe
    echo SortDemo.exe file removed
) else (
    echo SortDemo.exe file doesn't exist
)

echo Removing object files and SortDemo file successfull