#include "main.h"
/**
 * swap_int - Entry Point
 * @a : character that points to an int
 * @b : character that points to an int
 * Return:void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
