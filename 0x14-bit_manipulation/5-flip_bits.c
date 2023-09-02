#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: number to be returned
 * @m: second number to be returned
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, count = 0;
unsigned long int first;
unsigned long int second = n ^ m;

for (k = 1024; k >= 0; k--)
{
first = second >> k;
if (first & 1)
count++;
}

return (count);
}
