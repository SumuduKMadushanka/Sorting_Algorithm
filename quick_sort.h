#ifndef QUICK_SORT
#define QUICK_SORT

#include <vector>

// sort array
void quick_sort(int array[], int low, int high);
int partition(int array[], int low, int high);

// sort vector
void quick_sort(std::vector<int> &vector, int low, int high);
int partition(std::vector<int> &vector, int low, int high);

void swap(int &a, int &b);

#endif