#include "array_function.h"

// print arrays
void print_list(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// print vectors
void print_list(std::vector<int> vector)
{
    for (int key : vector)
    {
        std::cout << key << " ";
    }
    std::cout << std::endl;
}

// reverce arrays
void list_reverce(int array[], int size)
{
    int mid = size/2;
    for (int i = 0; i < mid; i++)
    {
        int tmp = array[size - 1 - i];
        array[size - 1 - i] = array[i];
        array[i] = tmp;
    }
}

// reverce vectors
void list_reverce(std::vector<int> &vector)
{
    int size = vector.size();
    int mid = size/2;
    for (int i = 0; i < mid; i++)
    {
        int tmp = vector[size - 1 - i];
        vector[size - 1 - i] = vector[i];
        vector[i] = tmp;
    }
}