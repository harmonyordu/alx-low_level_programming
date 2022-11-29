#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: The first element
 * Return: the sum of the linked list
 */

int sum_listint(listint_t *head)
{

	if (head == NULL)

		return (0);

	if (head->next == NULL)

		return (head->n);

	else

		return (sum_listint(head->next) + head->n);

}
