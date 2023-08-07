#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: pointer to name of file.
 * @text_content: pointers to string to write.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		write_file = write(file, text_content, strlen(text_content));
		if (write_file == -1)
			return (-1);
	}

	close(file);
	return (1);
}
