#include "lists.h"

/**
 * listint_len - calculates the count of elements in a linked list
 * @h: Pointer to the head of the linked list (of type listint_t) to
 *
 * Return: The total number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
