#include <stdio.h>
#include "main.h"
/**
 * _strcat - Entry Point
 * @dest: the destination array
 * @src : the source array
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while ( *p ) ++p;
	while ( ( *p++ = *src++ ) != '\0' );
	return (dest);

}
