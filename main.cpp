#include <iostream>
#include <vector>
#include <ctime>

#include "insertion_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"
#include "quick_sort.h"
#include "selection_sort.h"
#include "heap_sort.h"
#include "shell_sort.h"

#include "array_function.h"

int main()
{
    srand(time(NULL));
    const int SIZE = (rand() % 6) + 5;
    int array[SIZE];
    std::vector<int> vector;

    for (int i = 0; i < SIZE; i++)
    {
        int tmp = rand() % 100;
        array[i] = tmp;
        vector.push_back(tmp);
    }

    std::cout << "Array" << std::endl;
    print_list(array, SIZE);
    // insertion_sort(array, SIZE);
    // merge_sort(array, 0, SIZE - 1);
    // bubble_sort(array, SIZE);
    // quick_sort(array, 0, SIZE - 1);
    // selection_sort(array, SIZE);
    // heap_sort(array, SIZE);
    shell_sort(array, SIZE);
    print_list(array, SIZE);

    std::cout << "Vector" << std::endl;
    print_list(vector);
    // insertion_sort(vector);
    // merge_sort(vector, 0, SIZE - 1);
    // bubble_sort(vector);
    // quick_sort(vector, 0, SIZE - 1);
    // selection_sort(vector);
    // heap_sort(vector);
    shell_sort(vector);
    print_list(vector);

    return 0;
}
