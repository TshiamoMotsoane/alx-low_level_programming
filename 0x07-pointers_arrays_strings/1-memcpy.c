#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to the start of the memory area
 * @b: The value to fill it with
 * @n: The number of bytes to fill
 * Return : A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

