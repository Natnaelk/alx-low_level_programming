#include "main.h"

/**
 * print_times_table - Entry Point
 *
 * Return:0
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result;
			
			result = i * j;
			if (j == 0)
				_putchar('0' + result);
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result - 100) / 10);
				_putchar('0' + result % 10);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
