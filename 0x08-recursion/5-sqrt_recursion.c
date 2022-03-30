#include "main.h"
int square(int a, int i)
{
	if (i * i == a)
	{
		return (i);
	}
	else if (i * i < a)
	{
		return (square(a, i + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - Entry Point
 * @n : character
 * Return:int
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	return square(int n, int i);
}
