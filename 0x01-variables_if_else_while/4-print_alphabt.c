#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'program that prints the alphabet in lowercase except q and e'
 * Return: Always 0
 */
int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != 'e' && lw != 'q')
			putchar(lw);
	}

	putchar('\n');

	return (0);
}
