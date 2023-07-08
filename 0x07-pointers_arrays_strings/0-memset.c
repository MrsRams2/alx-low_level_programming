#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the starting address of the memory block
 * @b: the desired value
 * @n: number of bytes in the memomry block
 *
 * Return: new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
	
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
