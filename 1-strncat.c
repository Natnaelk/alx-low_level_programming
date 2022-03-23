#include "main.h"
/**
 * _strncat - Entry Point
 * @dest : destination array of string
 * @src : source array of string
 * @n : size of source to be concatenated
 * Return:character
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthd = 0;
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		lengthd++;
		j++;
	}
	for (i = 0; i <= n && src[i] != '\0'; i++)
		dest[lengthd + 1] = src[i];
	dest[lengthd + 1] = '\0';
	return (dest);
}
