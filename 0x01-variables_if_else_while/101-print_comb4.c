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
				int k = i * 100 + j * 10 + m;
				int l = j * 100 + i * 10 + m;
				int o = i * 100 + m * 10 + j;
				int p = j * 100 + m * 10 + i;
				int q = m * 100 + j * 10 + i;
				int r = m * 100 + i * 10 + j;

				if (k < l && k < o && k < p && k < q && k < r)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(m + 48);
					if (k < 700 || l < 700)
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
