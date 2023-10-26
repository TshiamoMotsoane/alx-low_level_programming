#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string the be checked
 *
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Recusive function
 * @s: the string to be checked
 * @start: the starting index
 * @end: the dending index
 *
 * Return: 1 if palindrome, otherwise 0
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	else if (s[start] != s[end])
		return (0);

	else
		return (check_palindrome(s, start + 1, end - 1));
}
