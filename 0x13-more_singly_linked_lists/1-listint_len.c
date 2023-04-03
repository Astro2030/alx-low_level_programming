#include "lists.h"

/**
 * listint_len - prints the number of nodes
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
