#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry Point
 * @str : a pointer to a character
 * Return:character
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;
	int leng;

	while (str[j] != '\0')
	{
		leng++;
		j++;
	}
	s = malloc(leng);

	if (s == 0 || str == 0)
		return (0);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
