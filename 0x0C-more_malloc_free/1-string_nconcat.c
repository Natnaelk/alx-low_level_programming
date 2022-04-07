#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Length of string
 * @s : string
 * Return:int
 */
unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * string_nconcat - a function that concatenates two strings
 * @s1 : string one
 * @s2 : string two
 * @n : size of s2 to be printed
 * Return:character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0;
	unsigned int k = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < _strlen(s2))
	{
		p = malloc(_strlen(s1) + n + 1);
	}
	else
		p = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (p == 0)
		return (NULL);
	while (s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0' && n > 0)
	{
		p[j] = s2[k];
		n--;
		k++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
