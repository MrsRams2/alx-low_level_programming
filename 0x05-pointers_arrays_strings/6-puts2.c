#include "main.h"

/**
 * puts2 - 'function that prints every other character of a string'
 * @str: character of string
 * Return: print
 */

void puts2(char *str)
{
int ch = 0;
int v = 0;
char *y = str;
int o;
while (*y != '\0')
{
y++;
ch++;
}
v = ch - 1;
for (o = 0 ; o <= v ; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
