#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the square root to be calculated
 *
 * Return: the square root
 */

int _sqrt_resursion(int n)
{
	if (n < 0)
		return (-1);

	else
		return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - recurses to find the
 * natural square root of a number
 * @n: the squre root to be calculated
 * @i: iterator
 *
 * Return: the squre root
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

	else
		return (_sqrt_helper(n, i + 1));
}
