#include "main.h"
/**
 * _strcpy - Entry Point
 * @dest : destination character
 * @src : source character
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] <= '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (*dest);
}
