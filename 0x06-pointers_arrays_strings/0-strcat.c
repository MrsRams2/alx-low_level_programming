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
int length_of_string, z;
int length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (z = 0; src[z] != '\0'; z++, length_of_string++)
{
dest[length_of_string] = src[j];
}
dest[length_of_string] = '\0';
return (dest);
}
