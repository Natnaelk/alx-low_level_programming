#include <stdio.h>
/**
 * main - Entry Point
 * @argc : argument counter
 * @argv : string
 * Return:integer
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	if (argc == 1)
		printf("%d\n", 0);
	else
		printf("%d\n", argc - 1);
	return (0);
}
