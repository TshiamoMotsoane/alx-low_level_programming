#include "main.h"

int _strlen_recursive(char *s);
int is_pal(char *s, int i, int len);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (is_pal(s, 0, _strlen_recursive(s)));
}

/**
 * _strlen_recursive - return length of string
 * @s: the sting to be calculated
 * Return: lenth of string
 */

int _strlen_recursive(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursive(s + 1));
}

/**
 * is_pal - checks if palindrome is recursive
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 * Return:1 if a string is a palindrome and 0 if not.
 */

int is_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (is_pal(s, i + 1, len - 1));
}
