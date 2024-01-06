#include "lists.h"
/**
 * is_palindrome - function that checks if a singly linked list is a palindrom
 * @head: pointer to pointer of first node of listint_t list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *curr;
	listint_t *prv = NULL, *next = NULL, *mirror_half = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	if (fast != NULL)
		mirror_half = slow->next;
	else
		mirror_half = slow;
	curr = mirror_half;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prv;
		prv = curr;
		curr = next;
	}
	mirror_half = prv;
	while (mirror_half != NULL)
	{
		if ((*head)->n != mirror_half->n)
			return (0);
		*head = (*head)->next;
		mirror_half = mirror_half->next;
	}
	return (1);
}
