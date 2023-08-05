#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)

{
	int num;
	unsigned int k = 0;

	if (!b)
		return (0);

	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);
		k = 2 * k + (b[num] - '0');
	}

	return (k);
}
