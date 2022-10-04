#include "main.h"
#include <stdio.h>

/**
 * linear_search - Entry point
 * @array: array to be searched
 * @size: size of the array
 * @value: the value of the array index
 * Return:int
 */
int linear_search(int *array, unsigned int size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
