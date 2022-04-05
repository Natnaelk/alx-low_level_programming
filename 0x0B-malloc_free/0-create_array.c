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
	d[0] = c;
	return (d);
	free(d);
}
