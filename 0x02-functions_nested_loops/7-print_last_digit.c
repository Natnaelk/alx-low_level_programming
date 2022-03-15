#include "main.h"

/**
 *  print_last_digit - Entry Point
 *  @a : character to check
 *  Return:0
 */
int print_last_digit(int a)
{
	int result;

	if (a < 0)
		result = -1 * (a % 10);
	else
		result = a % 10;

	_putchar(result + '0');
	return (result);
}
