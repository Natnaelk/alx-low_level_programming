#include <stdio.h>

/**
 * main - Entry Point
 * Return:0
 */
int main(void)
{
	int n = 1024, i, sum;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;		
		}
	}
	printf("%d\n", sum);
	return (0);
}
