#include "main.h"
#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main entry
 * Description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space
 * Do not use any other library (You can’t use GMP etc…)
 * @num: operand number
 * Return: number of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - prints the first 98 fibonacci sequence
 * Return: 0
 */

int main(void)
{
	unsigned long f1 =1, f2 = 2, tmp, mx = 100000000, f1o = 0, tmpo = 0;
	short int i = 1, initials0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initials0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initials0s > 0)
		{
			printf("%i", 0);
			initials0s--;
		}
		printf("lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
