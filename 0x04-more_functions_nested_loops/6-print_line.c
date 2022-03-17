#include "main.h"
/**
 * print_line - Entry Point
 * @n : number of times the character to be printed
 * Return:dash character
 */
void print_line(int n)
{
	while(n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
