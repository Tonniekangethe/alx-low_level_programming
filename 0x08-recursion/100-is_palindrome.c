#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int check_palindrome(char *s, int l, int r);

/**
 * is_palindrome - a function that shows a palindrome
 * @s: string
 *
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that prints length of string
 * @s: string variable
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - check if a string is a palindrome
 * @s: string variable
 * @l: left character of a string
 * @r: right character of a string
 *
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int check_palindrome(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	else if (*(s + l) != *(s + r - 1))
		return (0);
	return (check_palindrome(s, l + 1, r - 1));
}
