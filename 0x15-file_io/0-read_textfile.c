#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that reads a text file
 * @filename: pointer to a string containing
 * the name of the text file to be read
 * @letters: number of letters to be read from the file.
 * Return: actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
char *num;
ssize_t a;
ssize_t b;
ssize_t c;
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
buf = malloc(sizeof(char) * letters);
c = read(a, num, letters);
b = write(STDOUT_FILENO, num, c);
free(num);
close(a);
return (b);
}
