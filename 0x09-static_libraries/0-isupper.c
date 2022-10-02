#include "main.h"

/**
 * _is upper - checks for uppercase letters
 * @c: character to check for
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
