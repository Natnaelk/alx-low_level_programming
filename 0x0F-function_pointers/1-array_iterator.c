#include "function_pointers.h"
/**
 * array_iterator - xecutes a function given as a parameter on each
 * element of an array.
 * @array : integer
 * @size : size of the array
 * @action : pointer
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (array != NULL && action != NULL && i < size)
	{
		action(array[i]);
		i++;
	}
}
