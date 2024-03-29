#include "lists.h"

/**
 * *add_nodeint_end - adds element to the end of linked list
 * @head: pointer to first node
 * @n: integer value
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);
}


