#include "main.h"
/**
 * _strncpy - Entry Point
 * @dest : destinaiton array
 * @src : source array
 * @n : controller integer
 * Return:character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
