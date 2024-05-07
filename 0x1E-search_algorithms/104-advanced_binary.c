#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in sorted array of integers
 *                            using the advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: starting index in array
 * @high: ending index in array
 * @value: valu to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (high < low)
		return (-1);

	printf("Searching in array: ");

	for (mid = low; mid < high; mid++)
		printf("%d, ", array[mid]);

	printf("%d\n", array[mid]);
	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_recursive(array, low, mid, value));
	return (advanced_binary_recursive(array, mid + 1, high, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers
 *                   using the advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
