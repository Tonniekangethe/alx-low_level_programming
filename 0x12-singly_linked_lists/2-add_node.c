#include "lists.h"
#include <string.h>

/**
 * add_node - add a new nod at the beginning of the linked list
 * @str: new string to add the node
 * @head: double pointer to size_t
 *
 * Return: the head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str =strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
