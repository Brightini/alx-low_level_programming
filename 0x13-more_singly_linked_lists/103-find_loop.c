#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: head of list
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);

	fast = head;
	while (fast)
	{
		slow = fast;
		fast = fast->next;

		if (slow <= fast)
			return (fast);
	}
	return (NULL);
}
