#include "main.h"

int is_prime_number_helper(int n, int i);

/**
 * _prime_number - prints a prime number
 * @n: the number to be checked
 * Return: 1 if the input is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_helper(n, n - 1));
}

/**
 * _prime_number_helper - calculates if num is prime recursively
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if the input is a prime number, otherwise return 0.
 */

int is_prime_number_helper(int n, int i)
{

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, i - 1));
}
