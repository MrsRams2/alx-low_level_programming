#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: actual number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t ac;
ssize_t b;
ssize_t z;

ac = open(filename, O_RDONLY);
if (ac == -1)
return (0);

	buf = malloc(sizeof(char) * letters);
	z = read(ac, buf, letters);
	b = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(ac);
	return (b);
}
