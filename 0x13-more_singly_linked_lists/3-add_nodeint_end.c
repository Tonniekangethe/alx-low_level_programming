#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds node at the end of the list
 * @head: pointer to the first element in the list
 * @n: data of the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temporary->next)
		temporary = temporary->next;
	temporary->next = new;

	return (new);
}
