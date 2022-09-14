#include "main.h"
#include <stdio.h>
/**
 * main - main entry
 * Description: prints the sum of the even-valued terms, followed by new line.
 *  values do not exceed 4,000,000.
 *  Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
