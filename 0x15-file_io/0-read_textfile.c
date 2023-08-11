#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: pointer to a string containing
 * the name of the text file to be read
 * @letters: number of letters to be read
 * Return: actual number of letters it could read and print
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
char *buf;
ssize_t a;
ssize_t b;
ssize_t c;
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
buf = malloc(sizeof(char) * letters);
c = read(a, buf, letters);
b = write(STDOUT_FILENO, buf, c);
free(buf);
close(a);
return (b);
}
