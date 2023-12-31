#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: Variable number of strings to be printed
 *
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
char *str;
unsigned int sep;

va_start(string, n);

for (sep = 0; sep < n; sep++)
{
str = va_arg(string, char *);
if (str == NULL)
	printf("(nil)");
else
	printf("%s", str);
if (sep != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(string);
}
