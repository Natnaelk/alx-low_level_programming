#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name : char name
 * @f : pointer f
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
