#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: pointer to the number to change
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 1024)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
