#include <stdlib.h>
#include "main.h"
/**
 * array_range - Entry Point
 * @min : minimum range
 * @max : maximum range
 * Return:int
 */
int *array_range(int min, int max)
{
	int i = max - min;
	int j;

	if (min > max)
		return (NULL);

	int *p = malloc((i + 1) * sizeof(int));

	if (p == 0)
		return (NULL);

	for (j = 0; min + j <= max; j++)
		p[j] = min + j;
	return (p);	
}
