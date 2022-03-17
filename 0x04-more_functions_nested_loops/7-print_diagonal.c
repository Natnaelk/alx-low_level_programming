#include "main.h"
/**
 * print_diagonal - Entry Point
 * @n - the no of diagonal char that will be printed
 * Return:diagonal character
 */
void print_diagonal(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
