#include "main.h"
/**
 * _strchr - Entry Point
 * @s : pointer
 * @c : character
 * Return:pointer s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
