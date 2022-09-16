#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i = 1;

	for (; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)

			printf("FizzBuzz");

		else if (i % 3 == 0)

			print("Fizz");

		else if (i % 5 == 0)

			print("Buzz");

		else

			printf("%d", i);
	}
	printf("Buzz\n");
	return (0);
}
