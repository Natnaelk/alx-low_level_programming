#include "main.h"
/**
 * _puts - Entry Point
 * @str : pointer to a string
 * Return:void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
