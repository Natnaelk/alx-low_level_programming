#include "main.h"

/**
 *  _abs - Entry Point
 *  Return:0
 */
int _abs(int a)
{
	int result;

	if (a < 0)
	{
		result = a * -1;
		return (result);
	}
	else 
		return (a);
}
