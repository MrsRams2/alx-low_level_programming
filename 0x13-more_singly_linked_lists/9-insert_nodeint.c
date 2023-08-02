#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer
 * @idx: the index of the list where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *new_node;
listint_t *temp = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (k = 0; temp && k < idx; k++)
{
if (k == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}
return (NULL);
}
