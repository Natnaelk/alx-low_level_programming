#include "main.h"
/**
 * is_prime_number - Entry Point
 * @n : character
 * Return:int
 */
int primeno(int n, int i)
{
	int counter = 0;
	if (n % i == 0 && i <= n)
	{
		counter++;
		if (counter <= 2)
		{
			return (1);
		}
	}
	else if(i <= n)
	{
		return (primeno(n, i + 1));
	}
	else
		return (0);	
}
/**
 * primeno - Entry Point
 * @n : character
 * @i : variable
 */
int is_prime_number(int n)
{
	return (primeno(n, 1));
}
