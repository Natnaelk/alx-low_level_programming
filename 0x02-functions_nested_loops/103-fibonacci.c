#include <stdio.h>
/**
 * main - prints first 50 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	long num1, num2, next, sum;

	num1 = 0;
	num2 = 1;
	next = 0;
	sum = 0;
	while (next < 4000000)
	{
		next= num1 + num2;
		num1 = num2;
		num2 = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
