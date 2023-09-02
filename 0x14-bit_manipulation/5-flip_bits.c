#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number to be returned
 * @m: second number to be returned
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int another = n ^ m;

	for (k = 98; k >= 0; k--)
	{
		current = another >> k;
		if (current & 1)
			count++;
	}

	return (count);
}
