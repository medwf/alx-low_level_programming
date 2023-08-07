#include "main.h"
/**
* print_error - a funtion that print error.
* @file_from: first file.
* @file_to: second file.
* Return: 
*/
int print_error(int file_from, int file_to, char *a)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}
	return (0);
}
/**
 * close_all - to close all file
 * @file_from: first file.
 * @file_to: second file.
 * Return: 1 or -1.
 */
int close_all(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
/**
 * main - Entry points.
 * @argc: The number of argument.
 * @argv: an arrays of string.
 * Return: 97 if the number of argument is not the correct,
 *         98 if file_from does not exist, or if you can not read it,
 *         99 if you can not create or if write to file_to fails
 *        100 if you can not close a file descriptor,
 *          0 Success.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, read_file_from, write_file_to;
	char *stored;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	print_error(file_from, 0, argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC
			, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	
	print_error(0, file_to, argv[2]);
	while (read_file_from)
	{
		stored = malloc(sizeof(char) * 1024 + 1);
		if (!stored)
			return (0);
		read_file_from = read(file_from, stored, 1024);
		stored[1024] = '\0';
		
		print_error(read_file_from, 0, argv[1]);
		write_file_to = write(file_to, stored, read_file_from);
		
		if (read_file_from != write_file_to)
			print_error(0, -1, argv[2]);
	}
	
	free(stored);
	close_all(file_from, file_to);
	return (0);
}
