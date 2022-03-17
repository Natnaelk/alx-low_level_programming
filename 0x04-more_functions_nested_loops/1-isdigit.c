#include "main.h"
/**
 * _isdigit - Entry Point
 * @c : the checked character
 * Return:1 0r 0
 */
int _isdigit(int c)
{
	return (((c > 47 && c < 58)) ? 1 : 0);
}
