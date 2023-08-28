#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination memory area
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to be copied.
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
