#include <stdio.h>
#include <stdlib.h>
/**
 * isInt - Entry Point
 * @s : string to check
 * Return: 0 or 1
 */
int isInt(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - Entry Point
 * @argc : argument counter
 * @argv : list
 * Return:integer
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isInt(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
