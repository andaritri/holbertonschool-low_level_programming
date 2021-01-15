#ifndef _SEARCH_
#define _SEARCH_

#include <stdio.h>

/** Prototype functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int print_array(int *array, size_t lo, size_t hi);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_aux(int *arr, size_t lo, size_t hi, int val);
int min(size_t a, size_t b);
#endif
