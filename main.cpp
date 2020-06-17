#include <iostream>
#include <vector>
#include <ctime>
#include "insertion_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"

void print_list(int array[], int);
void print_list(std::vector<int>);
void list_reverce(int array[], int);
void list_reverce(std::vector<int> &vector);

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
    bubble_sort(array, SIZE);
    print_list(array, SIZE);
    // list_reverce(array, SIZE);
    // print_list(array, SIZE);

    std::cout << "Vector" << std::endl;
    print_list(vector);
    // insertion_sort(vector);
    // merge_sort(vector, 0, SIZE - 1);
    bubble_sort(vector);
    print_list(vector);
    // list_reverce(vector);
    // print_list(vector);

    return 0;
}

void print_list(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void print_list(std::vector<int> vector)
{
    for (int key : vector)
    {
        std::cout << key << " ";
    }
    std::cout << std::endl;
}

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