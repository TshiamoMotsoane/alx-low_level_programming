#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where valye is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, current;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	current = prev - step;
	while (array[current] < value && current < size)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		current++;
	}
	if (array[current] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		return (current);
	}
	return (-1);
}
