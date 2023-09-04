#include "main.h"
#include <stdlib.h>

/**
 * str_concat - takes 2 pointers to strings s1 and s2 as it's input
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;
	int m = 0, n = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	m = i + j;
	concat = malloc(sizeof(char) * (m + 1));

	if (concat == NULL)
		return (NULL);

	j = 0;

	while (n < m)
	{
		if (n <= i)
			concat[n] = s1[n];

		if (n >= i)
		{
			concat[n] = s2[j];
			j++;
		}
		n++;
	}
	concat[n] = '\0';
	return (concat);
}
