#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number to be flipped
 * @m: another number to be flipped
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int num, k = 0;
	unsigned long int bit1;
	unsigned long int bit2 = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		bit1 = bit2 >> num;
		if (bit1 & 1)
			k++;
	}

	return (k);
}
