#include "main.h"
#include <string.h>

/**
 *  _strspn - gets the length of a prefix substring.
 *  @s: Pointer to the input string
 *  @accept: Pointer to the string containing characters to accept
 *  Return: number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
