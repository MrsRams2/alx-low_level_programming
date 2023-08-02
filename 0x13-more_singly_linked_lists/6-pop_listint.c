#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a linked list
 * @head: pointer
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int nod;

if (!head || !*head)
	return (0);

nod = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (nod);
}
