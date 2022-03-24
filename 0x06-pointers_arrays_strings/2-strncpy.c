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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
