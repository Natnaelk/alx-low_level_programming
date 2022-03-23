#include <stdio.h>
#include "main.h"
/**
 * _strcat - Entry Point
 * @dest: the destination array
 * @src : the source array
 */
char *_strcat(char *dest, char *src)
{
	int lengthd = 0;
	int lengths = 0;
	int i = 0;
	int j;
	int k = 0;

	while (dest[i] != '\0')
	{
		lengthd++;
		i++;
	}
	while (src[k] != '\0')
	{
		lengths++;
		k++;
	}
	for (j = 0; j < lengths && src[j] != '\0'; j++)
		{
			dest[lengthd + 1] = src[j];
		}
	dest[lengthd + 1] = '\0';
	printf("\n");
	return (dest);
}
