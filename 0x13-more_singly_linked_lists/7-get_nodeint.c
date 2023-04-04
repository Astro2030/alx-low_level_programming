#include "lists.h"

/**
 * get_nodeint_at_index - nth node of linked list
 * @head: pointer to head node
 * @index: unsigned int value
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}
