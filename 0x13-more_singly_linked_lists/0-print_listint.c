#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the element of a list
 * @h: pointer to the next node
 *
 * Return: i values
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
