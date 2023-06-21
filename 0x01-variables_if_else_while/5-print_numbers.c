#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'program that prints all single digit numbers'
 * Return: Always 0
 */

int main(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);

}
