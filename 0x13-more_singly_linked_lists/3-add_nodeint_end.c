#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * @head: pointer
 * @n: data to be inserted
 *
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *nod;
listint_t *temp = *head;
nod = malloc(sizeof(listint_t));
if (!nod)
return (NULL);
nod->n = n;
nod->next = NULL;
if (*head == NULL)
{
*head = nod;
return (nod);
}
while (temp->next)
temp = temp->next;
temp->next = nod;
return (nod);
}
