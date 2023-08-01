#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a linked list
 * @head: Pointer to the first node in the linked list
 * @n: Data to be inserted into the new node
 *
 * Return: Pointer to the newly inserted node, or NULL if the insertion fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
