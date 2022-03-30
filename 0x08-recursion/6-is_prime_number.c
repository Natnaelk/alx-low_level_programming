#include "main.h"
/**
 * primeno - Entry Point
 * @n : character
 * @i : integer
 * Return:int
 */
int primeno(int n, int i)
{
	if (n % i == 0 && (i == 1 || i == n) && (n != 1 && n > 0))
	{
		return (1);
	}
	else if (i <= n)
	{
		return (primeno(n, i + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - Entry Point
 * @n : character
 * Return:int
 */

int is_prime_number(int n)
{
	return (primeno(n, 1));
}
