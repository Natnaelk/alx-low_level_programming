#include "function_pointers.h"
/**
 * @array_iterator - function
 * @array : integer
 * @size : size of the array
 * @action : pointer
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	while (array != NULL && action != NULL && i < size)
	{
		action(array[i]);
		i++;
	}
}
