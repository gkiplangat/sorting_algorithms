#include "sort.h"

/**
 * bubble_sort - Sorting Algorithm
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
 *
 * The bubble-sort algorithm for sorting an array of integers.
 *
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	int *prev, *next, temp;
	int swap_occurred;
	size_t index, pass;

	if (array == NULL || size < 2)
	return;

	for (pass = 0; pass < size - 1; pass++)
	{
		prev = array;
		next = array + 1;
		swap_occurred = false;

		for (index = 0; index < size - pass - 1; index++)
		{
		       if (*prev > *next)
		       {
			       temp = *prev;
			       *prev = *next;
			       *next = temp;
			       swap_occurred = true;
			       print_array(array, size);
		       }
		       prev = next;
		       next = array + index + 2;
		}
		if (!swap_occurred)
		break;
	}
}

