#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc : argument counter
 * @argv : pointer to array
 * Return:integer
 */
int main(int argc, char* argv[])
{
	printf("%s\n", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}
