#include "main.h"
/**
 * print_times_tables - print the time table for n.
 * Description: print multiplication table
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, rslt;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				rslt = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (rslt < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((rslt % 10) + '0');
				}
				else if (rslt >= 10 && rslt < 100)
				{
					_putchar(' ');
					_putchar((rslt / 10) + '0');
					_putchar((rslt % 10) + '0');
				}
				else if (rslt >= 100 && j != 0)
				{
					_putchar((rslt / 100) + '0');
					_putchar((rslt / 10) % 10 + '0');
					_putchar((rslt / 10) + '0');
				}
				else
					_putchar((rslt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
