#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: allocated space in memory
 * @s2: if Null treated as an empty string
 * @n: number of bytes
 * Return: if memory allocation fails, the function returns NULL
 * Otherwise, it returns a pointer to the newly created concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int i = 0, j = 0, m = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[m])
		m++;

	if (n >= m)
		l = i + m;
	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	m = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] =  s1[j];

		if (j >= i)
		{
			str[j] = s2[m];
			m++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
