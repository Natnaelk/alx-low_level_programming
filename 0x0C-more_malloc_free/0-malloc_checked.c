#include <stdlib.h>
/**
 * _realloc : Entry Point
 * @b : integer no
 * Return:void
 */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);
	return (s);
}
