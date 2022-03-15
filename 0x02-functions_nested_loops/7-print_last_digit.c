#include "main.h"

/**
 *  print_last_digit - Entry Point
 *  @a : character to check
 *  Return:0
 */
int print_last_digit(int a)
{
	int result;
	a = a >= 0 ? a : a * -1;
	result = a % 10;
	_putchar('0' + result);

	return (result);
}
