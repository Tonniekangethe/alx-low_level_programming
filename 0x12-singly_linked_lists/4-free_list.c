#include "lists.h"

/**
 * free_list - free linked list
 * @head: list to be freed
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
