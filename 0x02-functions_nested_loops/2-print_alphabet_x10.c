#include "main.h"

/**
 *  print_alphabet_x10 - Entry Point
 *  Return:0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int alp = 0;
		
		while (alp < 26)
		{
			_putchar(alp + 97);
			alp++;
		}
		i++;
		_putchar('\n');
	}
}
