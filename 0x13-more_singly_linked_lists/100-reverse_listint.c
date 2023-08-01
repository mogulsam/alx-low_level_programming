#include "lists.h"

/**
 * reverse_listint - reverses a list that is linked
 * @head: pointer to the initial node in the list
 *
 * Return: pointer to the initial node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
