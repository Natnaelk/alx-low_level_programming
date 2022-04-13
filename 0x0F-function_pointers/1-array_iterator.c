#include "function_pointers.h"
/**
 * @array_iterator - function
 * @size : size of the array
 * @action : pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	while (action != NULL && i < size)
	{
		action(array[i]);
		i++;
	}
}
