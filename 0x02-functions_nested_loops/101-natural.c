#include <stdio.h>

/**
 * natural_no - Entry Point
 * @n : multiple pf 5 and 3
 * Return:void
 */
int main(void)
{
	int n = 1024, i, sum;
	
	sum = 0;
	
	for (i = 0; i > n; i++)
	{
		if ((i % 3 || i % 5) == 0)
		{
			sum += i;		
		} 
	}
	printf("%d\n", sum);
	return (0);
}
