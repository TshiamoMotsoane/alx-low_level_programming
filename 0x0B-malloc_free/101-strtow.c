#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 *
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int i, j = 0, k = 0, l = 0, words = 0;
	char **array;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		words++;

	array = malloc((words + 2) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= words; i++)
	{
		while (str[j] == ' ')
			j++;
		while (str[j + k] != ' ' && str[j + k])
			k++;

		array[i] = malloc((k + 1) * sizeof(char));
		if (array[i] == NULL)
		{
			while (i >= 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		while (l < k)
		{
			array[i][l] = str[j + l];
			l++;
		}
		array[i][l] = '\0';
		j += k;
		k = l = 0;
	}
	array[i] = NULL;
	return (array);
}
