#include "selection_sort.h"

void selection_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i; j < size; j++)
        {
            if (array[min_index] > array[j])
            {
                min_index = j;
            }
        }
        swap(array[min_index], array[i]);
    }
}

void selection_sort(std::vector<int> &vector)
{
    for (int i = 0; i < vector.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < vector.size(); j++)
        {
            if (vector[min_index] > vector[j])
            {
                min_index = j;
            }
        }
        swap(vector[min_index], vector[i]);
    }
}