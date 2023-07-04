#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: pointer
 *
 * Return: value i
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
