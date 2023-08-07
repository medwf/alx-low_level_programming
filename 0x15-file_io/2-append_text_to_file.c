#include "main.h"
/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: pointer to the name of file.
 * @text_content: pointer to string.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, file_write, file_close;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		file_write = write(file, text_content, strlen(text_content));
		if (file_write == -1)
			return (-1);
	}

	file_close = close(file);
	if (file_close == 1)
		return (-1);

	return (1);
}
