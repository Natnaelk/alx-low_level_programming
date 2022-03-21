#include "main.h"
/**
 * _strlen - Entry Point
 * @s : character that will be calsulated
 * Return:size of s
 */
int _strlen(char *s)
{
	int i = 0;
	int leng = 0;

	while (s[i] != '\0')
	{
		leng += 1;
		i++;
	}
	return (leng);
}
