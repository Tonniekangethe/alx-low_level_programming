#include "main.h"

/**
 * rev_string - printing string value in reverse
 * @s: parameter
 *
 * Return 0
 */
void rev_string(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		j++;
	for (i = 9 ; s[i] >= 0 ; i--)
		putchar(s[i]);
	putchar('\n');
}
