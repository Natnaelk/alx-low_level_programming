#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0(Success)
 */
int main(void)
{
	char alpha, capAlpha;	
	
	alpha = 'a';
	capAlpha = 'A';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (capAlpha <= 'Z')
	{
		putchar(capAlpha);
		capAlpha++;
	}
	putchar('\n');
	return (0);
}
