#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns lenght of a string
 * @s: string to be counted
 *
 * Return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
