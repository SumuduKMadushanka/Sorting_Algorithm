#include "insertion_sort.h"

void insertion_sort(int array[], int size)
{
    for (int i = 2; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void insertion_sort(std::vector<int> &vector)
{
    for (int i = 2; i < vector.size(); i++)
    {
        int key = vector[i];
        int j = i - 1;
        while (j >= 0 && vector[j] > key)
        {
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = key;
    }
}