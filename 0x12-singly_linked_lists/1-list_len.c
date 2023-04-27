#include "lists.h"
/**
 * list_len - number of elements in a list
 * @h: pointer to the list
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
