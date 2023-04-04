#include "main.h"

/**
 * _memcpy - copy the n bytes from the memory area of src to dest
 * @dest: pointer to the function
 * @src: parameters
 * @n: the amount of memory being copied in bytes
 *
 * Return: dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
