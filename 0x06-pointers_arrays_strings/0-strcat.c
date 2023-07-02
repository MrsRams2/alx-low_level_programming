#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
int len = 0, z;

while (dest[len])
	len++;
for (z = 0; src[z] != '\0'; z++)
{
dest[len] = src[z];
len += 1;
}
dest[len] = '\0';
return (dest);
}
