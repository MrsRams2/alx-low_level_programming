#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int num = 0;

if (!b)
return (0);

for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
return (0);
num = 2 * num + (b[k] - '0');
}

return (num);
}
