#include <stdio.h>

/**
 * main - Entry point
 * Description: prints numbers from 1 to 100
 * for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
