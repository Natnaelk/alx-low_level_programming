#include <stdio.h>
#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a : an integer pointer
 * @n : size of array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
