#ifndef _SEARCH_
#define _SEARCH_

#include <stdio.h>

/** Prototype functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int print_array(int *array, size_t left, size_t right);

#endif
