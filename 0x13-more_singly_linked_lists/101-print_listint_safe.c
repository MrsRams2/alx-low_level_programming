#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function can print lists with a loop
 * @head: A pointer
 *
 * Return: 0 if looped
 */

size_t looped_listint_len(const listint_t *head)

{
const listint_t *slow, *fast;
size_t count = 1;
if (head == NULL || head->next == NULL)
return (0);
slow = head->next;
fast = (head->next)->next;
while (fast)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
count++;
slow = slow->next;
fast = fast->next;
}
slow = slow->next;
while (slow != fast)
{
count++;
slow = slow->next;
}
return (count);
}
slow = slow->next;
fast = (fast->next)->next;
}
return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: A pointer
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)

{
size_t count, index = 0;
count = looped_listint_len(head);
if (count == 0)
{
for (; head != NULL; count++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < count; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (count);
}
