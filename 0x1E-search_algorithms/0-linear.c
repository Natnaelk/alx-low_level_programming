#include "main.h"

/**
 * linear_search - Entry point
 * @*array: array to be searched
 * @size: size of the array
 * @value: the value of the array index
 * Return:int
 */
int linear_search(int *array, unsigned int size, int value)
{
	unsigned int i = 0;
	for(; i < size; i++)
	{
		if ( array[i] == value )
		{
			return (i);
		}		
	}
	return (-1);
}
