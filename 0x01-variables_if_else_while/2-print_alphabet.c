#include <stdio.h>
/**
 * main - Entry Point
 *Description: 'program that prints the alphabet in lowercase'
 * Return: Always 0
 */
int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	putchar('\n');
	return (0);
}
