#include "lists.h"

/**
 * add_nodeint - adds a node at the start line of a linked list
 * @head: pointer to the first node in the  linked list
 * @n: data to insert in that new node of the linked list
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int j)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->j = j;
	new->next = *head;
	*head = new;

	return (new);
}
