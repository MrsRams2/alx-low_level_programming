#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the starting address of the memory block
 * @b: the desired value
 * @n: number of bytes in the memomry block
 *
 * Return: new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n);

{
int i = 0;

for (;n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
