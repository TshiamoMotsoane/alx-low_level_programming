#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: starting index in array
 * @high: ending index in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t mid = 0, high;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (mid = 1; mid < size && array[mid] <= value; mid = mid * 2)
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
	}
	high = mid < size ? mid : size - 1;
	printf("Value found between index[%ld] and [%ld]\n", mid / 2, high);
	return (_binary_search(array, mid / 2, high, value));
}
