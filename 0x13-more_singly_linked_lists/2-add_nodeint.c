#include "lists.h"
#include <stdlib.h>

/**
 * createNode - creates a new node
 * @num: number
 * Return: new element
 */

listint_t *createNode(const int num)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)

		return (NULL);

	new->n = num;
	return (new);
}
/**
 * add_nodeint - This adds a new node at the beginning of a list_t list
 * @n: numbers
 * @head: The pointer to last element
 * Return: new last element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)

		return (NULL);

	new = createNode(n);

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;

	else
	{
		new->next = *head;
		*head = new;

	}

	return (new);
}
