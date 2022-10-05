#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: char to check for
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
