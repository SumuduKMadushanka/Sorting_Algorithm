#ifndef QUICK_SORT
#define QUICK_SORT

#include <vector>
#include "basic_function.h"

// sort array
void quick_sort(int array[], int low, int high);
int partition(int array[], int low, int high);

// sort vector
void quick_sort(std::vector<int> &vector, int low, int high);
int partition(std::vector<int> &vector, int low, int high);

#endif