#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Finds the length of a string
 * Return: The length of string
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
