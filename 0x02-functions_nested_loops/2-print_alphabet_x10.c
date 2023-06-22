#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{

char ch;
int tens;

for (tens = 0; tens <= '9'; tens++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
{
_putchar('\n');
tens++;
}
}
}
