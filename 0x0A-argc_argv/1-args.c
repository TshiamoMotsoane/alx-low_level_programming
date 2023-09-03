#include "main.h"
#include <stdio.h>

/**
 * main - prints a number
 * @argc: the number of arguments
 * @argv: the array of string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
