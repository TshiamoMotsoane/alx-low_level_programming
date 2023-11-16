#include <stdio.h>

void premain(void)__attribute__((constructor));

/**
 * premain - Prints a specific string  before the main function is executed
 * This function is a constructor, which means it runs
 *  before the main function.
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
