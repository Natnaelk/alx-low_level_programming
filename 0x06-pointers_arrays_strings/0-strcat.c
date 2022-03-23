#include "main.h"
/**
 * _strncat - Entry Point
 * @dest : destination array of string
 * @src : source array of string
 * @n : size of source to be concatenated
 * Return:character
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[k] != '\0'; k++)
	{
		dest[i++] = src[k];
	}
	dest[i] = '\0';
	return (dest);
}
