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
	unsigned int i = 0;
	unsigned int m = 0;
	int j;
	int k;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *p;

	j = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		length1++;
		i++;
	}
	while (s2[m] != '\0')
	{
		length2++;
		m++;
	}
	if (n < length2)
	{
		p = malloc(length1 + n + 1);
	}
	else
		p = malloc(length1 + length2 + 1);
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
	p[j] = '\0';
	return (p);
}
