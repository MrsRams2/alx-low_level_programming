#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: number of bytes to be copied
 *
 * Return: returns the pointer to the destination memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
