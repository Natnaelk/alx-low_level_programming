#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0(success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 1; j <= 9 ; j++)
		{
			if (i != j)
			{
				int k = i * 10 + i;
				int l = j * 10 + i;

				if (k < l)
				{
					putchar(i + 48);
					putchar(j + 48);
					if (k < 80 || l < 80)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
