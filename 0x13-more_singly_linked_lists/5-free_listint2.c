#include "lists.h"

/**
 * free_listint2 - deallocates memory
 * @head: pointer to first element
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
