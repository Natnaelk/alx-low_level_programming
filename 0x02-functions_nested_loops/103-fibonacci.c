#include <stdio.h>
/**
 * main - prints first 50 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int i;
	long num1, num2, num3, sum;

	num1 = 0;
	num2 = 1;
	while ( i < num2)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num1 > 400000)
		{
			i = num1;
		}
		if (num1 % 2 == 0 && num1 <= 4000000)
		{
			sum += num1;
		}
		i++;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
