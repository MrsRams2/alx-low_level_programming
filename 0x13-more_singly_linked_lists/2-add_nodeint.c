#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer
 * @n: data to be inserted
 *
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *nod;
nod = malloc(sizeof(listint_t));
if (!nod)
return (NULL);
nod->n = n;
nod->next = *head;
*head = nod;
return (nod);
}
