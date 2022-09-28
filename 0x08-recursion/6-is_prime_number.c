#include "main.h"

/**
 * is_prime_number - determines whether a number is prime number.
 * @n: int number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}

/**
 * checker - checks recursively the input from is_prime_number
 * @n: iterator
 * @base: base number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
