#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node in a linked list
 * @head: first node
 * @index: index of the node
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
unsigned int a = 0;
listint_t *temp = head;
while (temp && a < index)
{
temp = temp->next;
a++;
}
return (temp ? temp : NULL);
}
