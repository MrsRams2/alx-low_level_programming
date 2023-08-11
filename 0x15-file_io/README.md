#Name of the project is 0x15. C - File I/O 

Files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.

This is a list of the tasks:

0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);


1. Under the snow
Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);


3. cp
Write a program that copies the content of a file to another file.

Usage: cp file_from file_to



4. elf
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename

