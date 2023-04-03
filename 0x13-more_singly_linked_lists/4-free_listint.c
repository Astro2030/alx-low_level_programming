#include "lists.h"

/**
 * free_listint - deallocates memory
 * @head: pointer to first element
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
