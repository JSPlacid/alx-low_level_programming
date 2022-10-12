#include "function_pointers.h"

/**
 * int_index - searches for an int in integers array
 * @array: integers array
 * @size: size of the array
 * @cmp: A pointer to the func to be used to compare values
 * Return: If no element matches, oe size <= 0, return -1
 * else the index of the first element for which the cmp function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
