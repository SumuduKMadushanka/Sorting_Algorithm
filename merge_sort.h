#ifndef MERGE_SORT
#define MERGE_SORT

#include <vector>
#include <limits>

const int INF = std::numeric_limits<int>::max();

// sort arrays
void merge_sort(int array[], int p, int r);
void merge(int array[], int p, int q, int r);

// sort vectors
void merge_sort(std::vector<int> &vector, int p, int r);
void merge(std::vector<int> &vector, int p, int q, int r);

#endif