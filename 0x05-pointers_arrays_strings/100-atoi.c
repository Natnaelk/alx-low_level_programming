#include "main.h"
/**
 * _atoi - A function that converts aschii ot integer
 * @s : the string to be converted to integer
 * Return:integer 
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
		result = result * 10 + (s[i] - '0');
	
	return (sign * result);
}
