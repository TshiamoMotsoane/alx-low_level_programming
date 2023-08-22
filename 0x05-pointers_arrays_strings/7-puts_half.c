#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: print seconf half of the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	j = (len - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
