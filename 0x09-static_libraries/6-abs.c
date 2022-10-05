#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: number to be converted to its abs value
 * Return: an integer
 */

int _abs(int n)
{
	int abs = n * ((n > 0) - (n < 0));
	return (abs);
}
