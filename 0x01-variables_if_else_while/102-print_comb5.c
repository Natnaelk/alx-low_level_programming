#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0(success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99 ; i++)
	{
		for (j = 1; j <= 99 ; j++)
		{
			if ( i != j)
			{
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				if (j * 100 + i != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
