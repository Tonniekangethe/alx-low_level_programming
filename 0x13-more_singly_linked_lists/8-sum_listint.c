#include "lists.h"

/**
 * sum_listint - a function that finds te sum of the data in list
 * @head: first node in the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
