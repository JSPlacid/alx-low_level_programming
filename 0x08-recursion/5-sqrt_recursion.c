#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int number
 * Return: natural square root of number base
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine square root
 * @i: incrementer to compare against `c`
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
