#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1 : string one
 * @s2 : string two
 * n : size of s2 to be printed
 * Return:character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j;
	int k;
	int length;
	char *p;

	j = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
	{
		*s1 = '\0';
		*s2 = '\0';
	}
	while (s1[i] != '\0')
	{
		length++;
		i++;
	}
	p = malloc(length + n + 1);

	if (p == 0)
		return (NULL);
	while (s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	while (n > 0)
	{
		p[j] = s2[k];
		n--;
		k++;
		j++;
	}
	p[j + 1] = '\0';
	return (p);
}
