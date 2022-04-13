#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name : char name
 * @f : pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
