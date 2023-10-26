#include "main.h"

int check_prime_number(int n, int i);

/**
 * is_prime_number - Returns a prime number
 * @n: the number to be checked
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}

/**
 * check_prime_number - checksfor primr number
 * @n: the number to be checked
 * @i: iterator
 *
 * Return: 1 for prime nuber otherwise 0
 */

int check_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (check_prime_number(n, i + 1));
}
