#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry Point
 * @size : integer size
 * @c : character c
 * Return:character
 */
char *create_array(unsigned int size, char c)
{
	char *d;

	d = malloc(size);
	while (size > 0)
	{
		d[0] = c;
		size--;
	}
	return (d);
	free(d);
}
