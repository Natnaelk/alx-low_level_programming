#include <stdio.h>

/**
 * main - Entry Point
 * Return - 0
 */
int main(void)
{
	int i, n, num1, num2, num3;
	
	n = 50;
	num1 = 0;
	num2 = 1;
	for ( i = 2; i <= n; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%d, ", num3);
	}
	printf("\n");
}
