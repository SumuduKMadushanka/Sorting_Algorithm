#include "bubble_sort.h"

void bubble_sort(int array[], int size)
{
    bool swap;
    int j = 0;
    do
    {
        swap = false;
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (array[i] > array[i + 1])
            {
                int tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                swap = true;
            }
        }
        j++;
    } while (swap);
    
}

void bubble_sort(std::vector<int> &vector)
{
    bool swap;
    int j = 0;
    do
    {
        swap = false;
        for (int i = 0; i < vector.size() - 1 - j; i++)
        {
            if (vector[i] > vector[i + 1])
            {
                int tmp = vector[i];
                vector[i] = vector[i + 1];
                vector[i + 1] = tmp;
                swap = true;
            }
        }
        j++;
    } while (swap);
}