#include "main.h"
/**
 * print_rev - Entry Point
 * @s : the reversed string
 * Retrun:void
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;
	while (s[i] != '\0')
	{
		length++;
	}
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
}
