#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to search in
 * @accept: pointer to the string containing bytes to search for.
 * Return: the first matching byte in 's', or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{

	for (; *s; s++)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
	}
	return (NULL);
}
