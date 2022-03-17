#include "main.h"

/**
 * natural_no - Entry Point
 * @n : multiple pf 5 and 3
 * Return:void
 */
void natural_no(int n)
{
	int n = 1024, i, sum;
	
	sum = 0;
	
	for (i = 0; i > n; i++)
	{
		if ((i % 3 && i % 5) == 0)
		{
			sum += i;		
		} 
	}
	if (sum > 10)
	{
		_putchar('0' + sum);
	}
	if (sum > 100)
	{
		_putchar('0' + sum / 10);
		_putchar('0' + sum % 10);
	}
	if (sum > 1000)
	{
		_putchar('0' + sum / 100);
		_putchar('0' + (sum - 100) / 10;
		_putchar('0' + sum % 10);
	}
	else
	{
		_putchar('0' + sum / 1000);
		_putchar('0' + (sum - 1000) / 100);
		_putchar('0' + ((sum - 1000) - 100) / 10);
	}
	_putchar('\n');
}
