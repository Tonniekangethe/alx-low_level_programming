#include "main.h"

/**
 **_strcpy - copies the string from one variable to the other
 *
 *@dest: char type
 *@src: char type
 *Return: value of dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
