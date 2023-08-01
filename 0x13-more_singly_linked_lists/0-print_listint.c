#include "lists.h"

/**
 * print_listint - prints the elements of a linked list for this code
 * @h: linked list of  list int_t to print
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\n", j->n);
		num++;
		j = j->next;
	}

	return (num);
}
