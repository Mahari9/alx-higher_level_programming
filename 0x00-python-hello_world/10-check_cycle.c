#include "lists.h"
/**
 * check_cycle - A function in C that checks if a singly linked list
 * has a cycle in it
 * @list: pointer to the next list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *chaser = list;
	listint_t *runner = list;

	if (list == NULL || list->next == NULL)
		return (0); /* if only single node or null list, no a cycle */
	while (runner != NULL && runner->next != NULL)
	{
		chaser = chaser->next;
		runner = runner->next->next;
		if (chaser == runner)
			return (1); /* there is a cycle  */
	}
	return (0); /* There is no cycle */
}
