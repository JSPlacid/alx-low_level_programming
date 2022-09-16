#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * You are allowed to use the standard library
 * Return: 0
 */

int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
