:: Sort compile file
@echo OFF

:: Compile the cpp files
echo Start compile cpp files...

:: Compile the "basic_function.cpp"
g++ -c ./basic_function.cpp -o ./object_files/basic_function.o -std=c++11
:: Compile the "array_function.cpp"
g++ -c ./array_function.cpp -o ./object_files/array_function.o -std=c++11
:: Compile the "insertion_sort.cpp"
g++ -c ./insertion_sort.cpp -o ./object_files/insertion_sort.o -std=c++11
:: Compile the "merge_sort.cpp"
g++ -c ./merge_sort.cpp -o ./object_files/merge_sort.o -std=c++11
:: Compile the "bubble_sort.cpp"
g++ -c ./bubble_sort.cpp -o ./object_files/bubble_sort.o -std=c++11
:: Compile the "quick_sort.cpp"
g++ -c ./quick_sort.cpp -o ./object_files/quick_sort.o -std=c++11
:: Compile the "selection_sort.cpp"
g++ -c ./selection_sort.cpp -o ./object_files/selection_sort.o -std=c++11
:: Compile the "heap_sort.cpp"
g++ -c ./heap_sort.cpp -o ./object_files/heap_sort.o -std=c++11
echo Completed the compilation

:: Link the object files
echo Linking the object files...
g++ ./object_files/*.o ./main.cpp -o SortDemo
echo Completed the linking objects

echo Sort compilation successfull