#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string in two
 * @str: input pointer to the string to split
 * Return: A pointer to concat strings or NULL if str is NULL
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, len++;
			arr[k] = malloc((len + 1) * sizeof(char));
			if (arr[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(arr[k]);
				free(arr);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				arr[k][m] = str[i];
			arr[k++][m] = '\0';
		}
	}
	arr[k] = NULL;
	return (arr);
}
