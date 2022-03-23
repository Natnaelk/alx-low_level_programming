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
	int j = 0;
	int k = 0;
	char tmp[10];

	while (dest[i] != '\0')
	{
		lengthd++;
		i++;
	}
	while (src[k] != '\0')
	{
		lengths++;
		k++;
		tmp[lengths] = src[k];
	}
	printf("%d\n", lengthd);
	printf("%d\n", lengths);
	for (; j < lengths-1; j++)
	{
		dest[lengthd + 1] = tmp[j];
	}
	dest[lengthd + 1] = '\0';
	printf("%d\n", lengthd);
	printf("%d\n", lengths);
	printf("%s\n", dest);
	printf("%s\n", src);
	return (dest);
}
