#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer in an array
 * @array: array to search
 * @size: number of elements in array
 * @cmp: comparison function
 * Return: index of first element for which cmp does not return 0
 * or -1 if no such element is found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)

		if (cmp(array[i]))
			return (i);

	return (-1);
}
