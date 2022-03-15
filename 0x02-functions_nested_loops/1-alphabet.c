#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	    int alp = 0;

	while (alp < 26)
	{
		_putchar(alp + 97);
		alp++;
	}
	_putchar('\n');
}
