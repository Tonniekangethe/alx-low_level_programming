#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of character c
 * @size: parameter
 * @c: char to be assigned the array
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		str[i] = c;
	return (str);
}
