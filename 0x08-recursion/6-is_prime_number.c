#include "main.h"
/**
 * is_prime_number - Entry Point
 * @n : character
 * Return:int
 */
int primeno(int n, int i)
{
	if (n % i == 0 && i != 1 && i != n)
	{
			return (0);
	}
	else if(i <= n)
	{
		return (primeno(n, i + 1));
	}
	else
	{
		return (1);
	}
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
