#ifndef HEAP_SORT
#define HEAP_SORT

#include "basic_function.h"
#include <vector>

// sort array
void heap_sort(int array[], int size);
void heapify(int array[], int i, int end);

// sort vector
void heap_sort(std::vector<int> &vector);
void heapify(std::vector<int> &vector, int i, int end);

#endif