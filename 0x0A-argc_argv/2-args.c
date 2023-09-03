#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the number of arrguments
 * @argv: array of string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
