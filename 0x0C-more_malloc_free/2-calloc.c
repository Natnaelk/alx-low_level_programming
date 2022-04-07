#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that acts as calloc built in function
 * @nmemb : no of elements or members
 * @size : size of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int length = nmemb * size;
	unsigned int i = 0;
	char *p = malloc(length);

	if (p == 0 || nmemb == 0 || size == 0)
		return (NULL);
	while (i < length)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
