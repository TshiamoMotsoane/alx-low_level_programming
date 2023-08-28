#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to locate
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;


		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (NULL);
}
