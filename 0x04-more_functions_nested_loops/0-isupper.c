#include "main.h"
/**
 * _isupper - Entry Point
 * @c : the checked character
 * Return:1 0r 0
 */
int _isupper(int c)
{
	return (((c > 64 && c < 91)) ? 1 : 0);
}
