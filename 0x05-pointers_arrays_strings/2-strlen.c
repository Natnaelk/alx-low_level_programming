#include "main.h"
/**
 * _strlen - Entry Point
 * @s : character that will be calsulated
 * Return:size of s
 */
int _strlen(char *s)
{
	char b[] = *s;
	int i;
	int leng = 0;

	while (b[i] != '\0')
	{
		leng += 1;
		i++;	
	}
	return leng;
}
