#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the longer string
 * @needle: the substring
 *
 * Return: a pointer to the substring
 * otherwise - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;

	if ( *needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		haystack++;
	}
	return ('\0');
}
