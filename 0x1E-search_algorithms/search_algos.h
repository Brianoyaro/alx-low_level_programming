#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary(int *array, size_t low, size_t high, int s_value);
int advanced_binary(int *array, size_t size, int value);
int advanced_recursive_binary(int *array, size_t low, size_t high, int s_value);
int exponential_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
