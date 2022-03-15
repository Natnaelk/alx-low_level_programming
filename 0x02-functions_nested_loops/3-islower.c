#include "main.h"

/**
 * _islower - Entry Point
 * @c : character to check the case
 * Return:0
 *
 */
int _islower(int c)
{
	int result;

	if (c > 96 && c < 123)
	{
		result = 1;
		return (result);
	}
	else
	return (0);
}
