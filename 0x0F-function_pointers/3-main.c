#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the results of operations
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op_function = get_op_func(argv[2]);

	if (op_function == NULL)
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_function(num1, num2);
	printf("%d\n", result);

	return (0);
}
