#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to prev memory block
 * @old_size: size in bytes for allocated space for `ptr`
 * @new_size: size in bytes for new allocated space
 * Return: pointer to new memory block or null if error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size * sizeof(char));
		copy = ptr;
		for (i = 0; i < old_size; i++)
			p[i] = copy[i];
		free(ptr);
		return (p);
	}
	return (ptr);
}
