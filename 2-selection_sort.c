#include "sort.h"

/**
 * selection_sort - sorts integer array in ascending order
 * using selection sort algorithm.
 * @array: pointer to array intended to be sorted
 * @size: array's size
 */

void selection_sort(int *array, size_t size)
{
	/* Validate if list pointer is not null & size < 2 */
