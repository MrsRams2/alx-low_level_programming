#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int num;

	if (index > 63)
		return (-1);

	num = (n >> index) & 1;

	return (num);
}

