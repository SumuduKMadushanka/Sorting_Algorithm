#include "quick_sort.h"

// sort array
void quick_sort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high); // pivot index
        quick_sort(array, low, (pi - 1));
        quick_sort(array, (pi + 1), high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }

    swap(array[i + 1], array[high]);
    return (i + 1);
}

// sort vector
void quick_sort(std::vector<int> &vector, int low, int high)
{
    if (low < high)
    {
        int pi = partition(vector, low, high); // pivot index
        quick_sort(vector, low, (pi - 1));
        quick_sort(vector, (pi + 1), high);
    }
}

int partition(std::vector<int> &vector, int low, int high)
{
    int pivot = vector[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (vector[j] < pivot)
        {
            i++;
            swap(vector[i], vector[j]);
        }
    }

    swap(vector[i + 1], vector[high]);
    return (i + 1);
}