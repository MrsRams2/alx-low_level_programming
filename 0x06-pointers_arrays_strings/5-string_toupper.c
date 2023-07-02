#include "main.h"

/**
 * string_toupper - 'function that changes all lowercase letters'
 * @s: input string
 *
 * Return: pointer to dest
 */

char *string_toupper(char *)
{
int count = 0;
while (*(s + count) != '\0')
{
if ((*(s + count) >= 97) && (*(s + count) <= 122))
*(s + count) = *(s + count) - 32;
count++;
}
return (s);
}
