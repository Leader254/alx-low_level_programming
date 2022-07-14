#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer tot he first struct in the linked list
 * Return: No value
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (; head;)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
