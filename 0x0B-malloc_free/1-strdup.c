#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string
 * @str: the string to be duplicated
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc((strlen(str) + 1) * sizeof(char));

	if (new_str == NULL)
	return (NULL);

	strcpy(new_str, str);
	return (new_str);
}
