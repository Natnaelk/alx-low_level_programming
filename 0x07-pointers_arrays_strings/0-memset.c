#include "main.h"
/**
 * _memset - Entry Point
 * @s : pointer character
 * @b : replacing character
 * @n : integer size
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
