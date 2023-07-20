#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list sep;
unsigned int num;

va_start(sep, n);

for (num = 0; num < n; num++)
{
printf("%d", va_arg(sep, int));

if (num != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(sep);
}
