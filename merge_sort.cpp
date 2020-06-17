#include "merge_sort.h"

void merge_sort(int array[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(array, p, q);
        merge_sort(array, (q + 1), r);
        merge(array, p, q, r);
    }
}

void merge(int array[], int p, int q, int r)
{
    int n_left = q - p + 1;
    int n_right = r - q;
    int left[n_left + 1], right[n_right + 1];
    for (int i = 0; i < n_left; i++)
    {
        left[i] = array[p + i];
    }
    for (int i = 0; i < n_right; i++)
    {
        right[i] = array[q + i + 1];
    }
    left[n_left] = INF;
    right[n_right] = INF;
    int i = 0;
    int j = 0;
    for (int k = p; k <= r; k++)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }else{
            array[k] = right[j];
            j++;
        }
    }
}

void merge_sort(std::vector<int> &vector, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(vector, p, q);
        merge_sort(vector, (q + 1), r);
        merge(vector, p, q, r);
    }
}

void merge(std::vector<int> &vector, int p, int q, int r)
{
    int n_left = q - p + 1;
    int n_right = r - q;
    int left[n_left + 1], right[n_right + 1];
    for (int i = 0; i < n_left; i++)
    {
        left[i] = vector[p + i];
    }
    for (int i = 0; i < n_right; i++)
    {
        right[i] = vector[q + i + 1];
    }
    left[n_left] = INF;
    right[n_right] = INF;
    int i = 0;
    int j = 0;
    for (int k = p; k <= r; k++)
    {
        if (left[i] <= right[j])
        {
            vector[k] = left[i];
            i++;
        }else{
            vector[k] = right[j];
            j++;
        }
    }
}