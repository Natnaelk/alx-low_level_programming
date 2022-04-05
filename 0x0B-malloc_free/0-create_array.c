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
	char *d = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
	{
		d[size] = c;
	}
	return (d);
}
