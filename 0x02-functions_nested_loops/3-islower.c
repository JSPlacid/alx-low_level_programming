#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, else 0.
 * @c: char tytpe letter
 * Return: 1 if lowercase, else 0
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
