#include "main.h"
/**
 * main - Entry points
 * @argc: the number of argument.
 * @argv: an arrays of string.
 * Return: 98 0r 0.
*/
int main(int argc, char **argv)
{
	int file, read_file;
	char stored[64];
	/*Elf64_Ehdr *header;*/

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage : %s elf_file\n", argv[0]);
		exit(98);
	}

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't open this file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(file, stored, 64);
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from this file %s\n", argv[1]);
		exit(98);
	}
	if (stored[0] != 0x7f || stored[1] != 'E' || stored[2] != 'L' || stored[3] !=
		 'F')
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		exit(98);
	}
	/* i don't know how can i print it yet */
	close(file);
	return (0);
}
