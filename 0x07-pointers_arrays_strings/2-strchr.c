#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: the character to locate
 * Return: first occurence of 'c' in 's' or NULL if not found
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
