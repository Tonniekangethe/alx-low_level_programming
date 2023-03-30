#include "main.h"

/**
 * _strncpy - copy n number of characters from a string to the other
 * @dest: string
 * @src: string
 * @n: number of characters to be copied
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
