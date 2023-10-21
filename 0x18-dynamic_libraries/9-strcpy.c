#include "main.h"
#include <stdio.h>
/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte, to the
* buffer pointed to by dest.
* @dest: destination.
* @src: source.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int ch = 0;
while (ch >= 0)
{
*(dest + ch) = *(src + ch);
if (*(src + ch) == '\0')
break;
ch++;
}
return (dest);
}
