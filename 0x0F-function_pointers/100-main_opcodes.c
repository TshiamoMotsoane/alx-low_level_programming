#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of this function
 * @func_ptr: pointer to the function
 * @num_bytes: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *func_ptr, int num_bytes)
{
	int j;

	for (j = 0; j < num_bytes; j++)
	{
		printf("%2hhx", func_ptr[j]);
		if (j < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - Prints the opcodes of this function
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successful, 1 if does not recieve exactly one argument
 * or 2 if the number of bytes is negative
 */

int main(int argc, char **argv)
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, num_bytes);
	return (0);
}
