#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees listint_t
 * @head: list to be freed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
