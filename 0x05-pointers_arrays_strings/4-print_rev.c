#include "main.h"

/**
 * print_rev - 'function that prints a string, in reverse'
 * @s: string to be printed
 * Return: Always 0
 */

void print_rev(char *s)
{
int ch = 0;
int o;
while (*s != '\0')
{
ch++;
s++;
}
s--;
for (o = ch; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');

}
