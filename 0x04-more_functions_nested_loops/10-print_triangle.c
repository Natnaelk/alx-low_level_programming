#include "main.h"
/**
 * print_triangle - Entry Point
 * @size : size of the triangle
 * Return : triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	if (size == 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		} 
		_putchar('\n');
	}
}
