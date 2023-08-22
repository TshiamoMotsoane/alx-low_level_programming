#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: Print the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
