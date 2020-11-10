#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: parameter 1
 * @text_content: parameter 2
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int result = 1, fd = 0, i = 0, length = 0;

	if (filename == NULL)
	{
		result = -1;
		return (result);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		result = -1;
		return (result);
	}

	if (text_content)
	{

		while (text_content[i])
			i++;

		length = write(fd, text_content, i);
		if (length != i)
			result = -1;
	}
	close(fd);
	return (result);
}
