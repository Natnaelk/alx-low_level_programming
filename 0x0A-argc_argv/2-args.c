#include <stdio.h>
/**
 * main - Entry Point
 * @argc : argument counter
 * @argv : pointer to an array pointer
 * Return:integer
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
