#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create.
 * @text_content: terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int ac, z, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	ac = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(ac, text_content, len);

	if (ac == -1 || z == -1)
	return (-1);

	close(ac);

	return (1);
}
