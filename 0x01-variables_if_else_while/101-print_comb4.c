#include <stdio.h>
/**
 *  main - Entry Point
 *  Return: 0(success)
 */
int main(void)
{
	int i, j, m;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 1; j <= 9 ; j++)
		{
			for (m = 2; m <= 9 ; m++)
			{
			if (i != j && i != m && j != m)
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
	}
	putchar('\n');
	return (0);
}
