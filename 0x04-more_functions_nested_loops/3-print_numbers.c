#include "main.h"
/**
 * print_numbers - Entry Point
 * Return:numbers
 */
void print_numbers(void)
{
	int n;
	
	n = 0;
	while (n <= 9)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
