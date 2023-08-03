#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 * @h: pointer
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)

{
size_t num = 0;
int k;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
k = *h - (*h)->next;
if (k > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
num++;
}
else
{
free(*h);
*h = NULL;
num++;
break;
}
}
*h = NULL;
return (num);
}
