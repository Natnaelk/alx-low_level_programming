#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
	*s++ = b;

return (ptr);
}

/**
 * _calloc - a function that acts as calloc built in function
 * @nmemb : no of elements or members
 * @size : size of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int length = nmemb * size;
	unsigned int i = 0;
	void *p = malloc(length);

	if (p == 0 || nmemb == 0 || size == 0)
		return (NULL);
	_memset(m, 0, length);
	return (p);
}
