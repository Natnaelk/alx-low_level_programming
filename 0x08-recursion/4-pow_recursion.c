#include "main.h"
/**
 * _pow_recursion - Entry Point
 * @x : the number to be powered
 * @y : the superscript
 * Return:int
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
