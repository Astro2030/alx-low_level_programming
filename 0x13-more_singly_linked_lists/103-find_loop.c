#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *ptr2 = head;

	if (!head)
	return (NULL);

	while (ptr && ptr2 && ptr2->next)
	{
		ptr2 = ptr2->next->next;
		ptr = ptr->next;
		if (ptr2 == ptr)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}

	return (NULL);
}
