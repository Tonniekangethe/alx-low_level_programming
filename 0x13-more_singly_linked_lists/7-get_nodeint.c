#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node in a list
 * @head: first node in a list
 * @index: index of the node to return
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; temp && i < index; i++)
		temp = temp->next;

	return (temp ? temp : NULL);
}
