#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - retuns the natural square root of a number.
 * @n: the input number for which we want the natural squre root
 * Return: the natural squre root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 * _sqrt - Recurses to find the natural square root of a number
 * @n: the number to be calculated
 * @i: iterate number
 * Return: the natural square root of a number
 */

int _sqrt(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}
