#include "shell_sort.h"

void shell_sort(int array[], int size)
{
    int gap = size/2;
    while (gap > 0)
    {
        for (int i = gap; i < size; i++)
        {
            int tmp = array[i];
            int j = i;
            while (j >= gap && array[j - gap] > tmp)
            {
                array[j] = array[j - gap];
                j -= gap;
            }
            array[j] = tmp;
        }
        gap /= 2;
    }
}

void shell_sort(std::vector<int> &vector)
{
    int size = vector.size();
    int gap = size/2;
    while (gap > 0)
    {
        for (int i = gap; i < size; i++)
        {
            int tmp = vector[i];
            int j = i;
            while (j >= gap && vector[j - gap] > tmp)
            {
                vector[j] = vector[j - gap];
                j -= gap;
            }
            vector[j] = tmp;
        }
        gap /= 2;
    }
}