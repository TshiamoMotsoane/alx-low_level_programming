#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	new_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(new_str, s1);
	else
		new_str[0] = '\0';

	if (s2 != NULL)
		strcat(new_str, s2);
	return (new_str);
}
