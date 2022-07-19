#include "lists.h"

/**
 * freee-listint_t - function that frees a listint_t list.
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
