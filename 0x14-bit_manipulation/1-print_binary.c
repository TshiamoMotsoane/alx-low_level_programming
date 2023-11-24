#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: numbe to convert to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	char flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (mask = 1UL << ((sizeof(n) * 8) - 1); mask > 0; mask >>= 1)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
