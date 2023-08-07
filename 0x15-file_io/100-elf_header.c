#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - Entry points
 * @argc: the number of argument.
 * @argv: an arrays of string.
 * Return: 
*/
int main(int argc, char **argv)
{
    int file, read_file;
    Elf64_Ehdr reader;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage : %s elf_file\n", argv[0]);
        exit(98);
    }

    file = open(argv[1], O_RDONLY);
    
	if (file == -1)
    {
        dprintf(STDERR_FILENO, "Error can't open this file %s\n", argv[1]);
        exit(98);
    }
    
    close(file);
    return (0);
}
