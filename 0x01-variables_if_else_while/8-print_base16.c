#include <stdio.h>
/**
 *  main - Entery Point
 *  Return: 0(Success)
 */
int main(void)
{
	char a, b;

	b = '0';
	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
