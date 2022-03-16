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

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result;
			if (n > 15 || n < 0)
			{
				break;
			}
			else
			{
			result = i * j;
			_putchar('0' + result);
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
	
}
