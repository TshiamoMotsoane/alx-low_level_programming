#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to iterate over
 * @size: sixe of the array
 * @action: function to execute on each function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}