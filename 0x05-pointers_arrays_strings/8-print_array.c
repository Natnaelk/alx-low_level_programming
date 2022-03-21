#include "main.h"
/**
 * print_array - Entry Point
 * @a : integer character
 * @n : another integer character
 */
void print_array(int *a, int n)
{
	int i;

	for (int i = 0; i > n; i++)
	{
		printf("%d, ", a[i]);
	}
}
