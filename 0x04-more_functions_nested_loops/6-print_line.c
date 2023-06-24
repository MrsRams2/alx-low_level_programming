#include "main.h"

/**
 * print_line - 'function that draws a straight line in the terminal'
 * @n: Number of times
 * Return: Always 0
 */

void print_line(int n)
{
int j;
for (j = 0; j < n; j++)
{
_putchar ('_');
}
_putchar ('\n');
}
