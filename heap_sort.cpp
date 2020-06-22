#include "heap_sort.h"

// array
void heap_sort(int array[], int size)
{
    for (int i = ((size/2) - 1); i >= 0; i--)
    {
        heapify(array, i, size);
    }

    for (int i = (size - 1); i > 0; i--)
    {
        swap(array[0], array[i]);
        heapify(array, 0, i);
    }
}

void heapify(int array[], int i, int end)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < end && array[largest] < array[left])
    {
        largest = left;
    }

    if (right < end && array[largest] < array[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(array[i], array[largest]);
        heapify(array, largest, end);
    }
}

// vector
void heap_sort(std::vector<int> &vector)
{
    int size = vector.size();
    for (int i = ((size/2) - 1); i >= 0; i--)
    {
        heapify(vector, i, size);
    }

    for (int i = (size - 1); i > 0; i--)
    {
        swap(vector[0], vector[i]);
        heapify(vector, 0, i);
    }
}

void heapify(std::vector<int> &vector, int i, int end)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < end && vector[largest] < vector[left])
    {
        largest = left;
    }

    if (right < end && vector[largest] < vector[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(vector[i], vector[largest]);
        heapify(vector, largest, end);
    }
}