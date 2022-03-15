#include "main.h"
/**
 *  main - Entry Point
 *  Return:0(Successful)
 */
int main(void)
{
	char letter[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(letter[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
