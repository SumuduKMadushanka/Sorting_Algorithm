#ifndef ARRAY_FUNCTION
#define ARRAY_FUNCTION

#include <iostream>
#include <vector>

// print list
void print_list(int array[], int size);
void print_list(std::vector<int> vector);

// reverce list
void list_reverce(int array[], int size);
void list_reverce(std::vector<int> &vector);

#endif