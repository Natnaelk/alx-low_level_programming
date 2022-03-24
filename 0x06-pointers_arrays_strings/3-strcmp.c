#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1 : first character
 * @s2 : second character
 * Return:integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i]!= '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
			break;
		}
		i++;
	}
	return 0;
}
