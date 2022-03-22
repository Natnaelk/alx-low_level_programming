#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _atoi - A function that converts aschii ot integer
 * @s : the string to be converted to integer
 * Return:integer 
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] == '-' && (s[i+1] > 47 && s[i+1] < 58))
		{
			if (isspace(s[i+1]) == 0)
			sign = -1;
			
		}
		if (s[i] > 47 && s[i] < 58)
		{
		result = result * 10 + (s[i] - '0');
		if (s[i+1] < 47 || s[i+1] > 58)
		{
			break;
		}
		}
	}
	return (sign * result);
}
