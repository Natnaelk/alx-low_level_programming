#include "main.h"
/**
 * _strlen_recursion - Entry Point
 * @s : character
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(s++);
	}
	return length;
}
