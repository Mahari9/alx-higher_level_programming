#include "lists.h"
/**
 * insert_node - insert a new node to sorted listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be sorted to the new node
 * Return: address of the new node or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = node;
	if (node == NULL || node->n > number)
	{
		*head = new;
		return (new);
	}
	else
	{
		for (; node; node = node->next)
		{
			if (node->n <= number && (node->next == NULL ||
						    node->next->n > number))
			{
				new->next = node->next;
				node->next = new;
				return (new);
			}
		}
	}
	return (NULL);
}
