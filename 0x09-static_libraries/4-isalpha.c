#include "main.h"

/**
 * _isalpha - checks if a char is alpbabet
 * @c: ASCII value of char to check
 * Return: 0 if its a letter, else 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c<= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
