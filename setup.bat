:: Sort compile file
@echo OFF

:: Compile the cpp files
echo Start compile cpp files...
mkdir tmp_c
set /a flag=0
GOTO :Basic_Func_Cpp

:: Compile the "basic_function.cpp"
:Basic_Func_Cpp
if exist .\object_files\basic_function.o (
    GOTO :Has_basic_function_o
) else (
    GOTO :Compile_basic_function
)

:Has_basic_function_o
copy .\basic_function.cpp .\tmp_c
copy .\object_files\basic_function.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d basic_function.o basic_function.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="basic_function.cpp" (
    GOTO :Compile_basic_function
) else (
    echo basic_function.o already compiled
    GOTO :Array_Func_Cpp
)

:Compile_basic_function
echo Compiling basic_function.cpp...
g++ -c ./basic_function.cpp -o ./object_files/basic_function.o -std=c++11
set /a flag=1
echo Compiling basic_function.cpp Completed

:: Compile the "array_function.cpp"
:Array_Func_Cpp
if exist .\object_files\array_function.o (
    GOTO :Has_array_function_o
) else (
    GOTO :Compile_array_function
)

:Has_array_function_o
copy .\array_function.cpp .\tmp_c
copy .\object_files\array_function.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d array_function.o array_function.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="array_function.cpp" (
    GOTO :Compile_array_function
) else (
    echo array_function.o already compiled
    GOTO :Insertion_Sort_Cpp
)

:Compile_array_function
echo Compiling array_function.cpp...
g++ -c ./array_function.cpp -o ./object_files/array_function.o -std=c++11
set /a flag=1
echo Compiling array_function.cpp Completed

:: Compile the "insertion_sort.cpp"
:Insertion_Sort_Cpp
if exist .\object_files\insertion_sort.o (
    GOTO :Has_insertion_sort_o
) else (
    GOTO :Compile_insertion_sort
)

:Has_insertion_sort_o
copy .\insertion_sort.cpp .\tmp_c
copy .\object_files\insertion_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d insertion_sort.o insertion_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="insertion_sort.cpp" (
    GOTO :Compile_insertion_sort
) else (
    echo insertion_sort.o already compiled
    GOTO :Merge_Sort_Cpp
)

:Compile_insertion_sort
echo Compiling insertion_sort.cpp...
g++ -c ./insertion_sort.cpp -o ./object_files/insertion_sort.o -std=c++11
set /a flag=1
echo Compiling insertion_sort.cpp Completed

:: Compile the "merge_sort.cpp"
:Merge_Sort_Cpp
if exist .\object_files\merge_sort.o (
    GOTO :Has_merge_sort_o
) else (
    GOTO :Compile_merge_sort
)

:Has_merge_sort_o
copy .\merge_sort.cpp .\tmp_c
copy .\object_files\merge_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d merge_sort.o merge_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="merge_sort.cpp" (
    GOTO :Compile_merge_sort
) else (
    echo merge_sort.o already compiled
    GOTO :Bubble_Sort_Cpp
)

:Compile_merge_sort
echo Compiling merge_sort.cpp...
g++ -c ./merge_sort.cpp -o ./object_files/merge_sort.o -std=c++11
set /a flag=1
echo Compiling merge_sort.cpp Completed

:: Compile the "bubble_sort.cpp"
:Bubble_Sort_Cpp
if exist .\object_files\bubble_sort.o (
    GOTO :Has_bubble_sort_o
) else (
    GOTO :Compile_bubble_sort
)

:Has_bubble_sort_o
copy .\bubble_sort.cpp .\tmp_c
copy .\object_files\bubble_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d bubble_sort.o bubble_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="bubble_sort.cpp" (
    GOTO :Compile_bubble_sort
) else (
    echo bubble_sort.o already compiled
    GOTO :Quick_Sort_Cpp
)

:Compile_bubble_sort
echo Compiling bubble_sort.cpp...
g++ -c ./bubble_sort.cpp -o ./object_files/bubble_sort.o -std=c++11
set /a flag=1
echo Compiling bubble_sort.cpp Completed

:: Compile the "quick_sort.cpp"
:Quick_Sort_Cpp
if exist .\object_files\quick_sort.o (
    GOTO :Has_quick_sort_o
) else (
    GOTO :Compile_quick_sort
)

:Has_quick_sort_o
copy .\quick_sort.cpp .\tmp_c
copy .\object_files\quick_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d quick_sort.o quick_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="quick_sort.cpp" (
    GOTO :Compile_quick_sort
) else (
    echo quick_sort.o already compiled
    GOTO :Selection_Sort_Cpp
)

:Compile_quick_sort
echo Compiling quick_sort.cpp...
g++ -c ./quick_sort.cpp -o ./object_files/quick_sort.o -std=c++11
set /a flag=1
echo Compiling quick_sort.cpp Completed

:: Compile the "selection_sort.cpp"
:Selection_Sort_Cpp
if exist .\object_files\selection_sort.o (
    GOTO :Has_selection_sort_o
) else (
    GOTO :Compile_selection_sort
)

:Has_selection_sort_o
copy .\selection_sort.cpp .\tmp_c
copy .\object_files\selection_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d selection_sort.o selection_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="selection_sort.cpp" (
    GOTO :Compile_selection_sort
) else (
    echo selection_sort.o already compiled
    GOTO :Heap_Sort_cpp
)

:Compile_selection_sort
echo Compiling selection_sort.cpp...
g++ -c ./selection_sort.cpp -o ./object_files/selection_sort.o -std=c++11
set /a flag=1
echo Compiling selection_sort.cpp Completed

:: Compile the "heap_sort.cpp"
:Heap_Sort_cpp
if exist .\object_files\heap_sort.o (
    GOTO :Has_heap_sort_o
) else (
    GOTO :Compile_heap_sort
)

:Has_heap_sort_o
copy .\heap_sort.cpp .\tmp_c
copy .\object_files\heap_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d heap_sort.o heap_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="heap_sort.cpp" (
    GOTO :Compile_heap_sort
) else (
    echo heap_sort.o already compiled
    GOTO :Shell_Sort_Cpp
)

:Compile_heap_sort
echo Compiling heap_sort.cpp...
g++ -c ./heap_sort.cpp -o ./object_files/heap_sort.o -std=c++11
set /a flag=1
echo Compiling heap_sort.cpp Completed

:: Compile the "shell_sort.cpp"
:Shell_Sort_Cpp
if exist .\object_files\shell_sort.o (
    GOTO :Has_shell_sort_o
) else (
    GOTO :Compile_shell_sort
)

:Has_shell_sort_o
copy .\shell_sort.cpp .\tmp_c
copy .\object_files\shell_sort.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d shell_sort.o shell_sort.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="shell_sort.cpp" (
    GOTO :Compile_shell_sort
) else (
    echo shell_sort.o already compiled
    GOTO :Main_Cpp
)

:Compile_shell_sort
echo Compiling shell_sort.cpp...
g++ -c ./shell_sort.cpp -o ./object_files/shell_sort.o -std=c++11
set /a flag=1
echo Compiling shell_sort.cpp Completed

:: Compile the "main.cpp"
:Main_Cpp
if exist .\object_files\main.o (
    GOTO :Has_main_o
) else (
    GOTO :Compile_main
)

:Has_main_o
copy .\main.cpp .\tmp_c
copy .\object_files\main.o .\tmp_c
cd .\tmp_c
for /f %%i in ('dir /b /o:d main.o main.cpp') do set latest_file=%%i
cd ..
if "%latest_file%"=="main.cpp" (
    GOTO :Compile_main
) else (
    echo main.o already compiled
    GOTO :Link_Obj_Files
)

:Compile_main
echo Compiling main.cpp...
g++ -c ./main.cpp -o ./object_files/main.o -std=c++11
set /a flag=1
echo Compiling main.cpp Completed

:: Link the object files
:Link_Obj_Files
if %flag%==1 (
    GOTO :Linking_Obj
) else (
    echo Nothing was modified
    GOTO :End_Compilation
)
:Linking_Obj
echo Linking the object files...
g++ ./object_files/*.o -o SortDemo
echo Completed the linking objects

:End_Compilation
echo Completed the compilation
echo Sort compilation successfull
rmdir /s /q .\tmp_c