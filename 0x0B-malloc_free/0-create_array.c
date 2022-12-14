#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates arrays of characters and init with specific char
 * @size: size of array
 * @c: specific char
 * Return: a pointer to the array, NULL if size = 0 or if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
