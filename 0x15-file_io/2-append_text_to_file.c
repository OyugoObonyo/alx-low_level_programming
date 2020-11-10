#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result = 1, fd = 0, i = 0, length = 0;

	if (filename == NULL)
	{
		result = -1;
		return (result);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		result = -1;
		return (result);
	}

	if (text_content && fd > 0)
	{

		while (text_content[i])
			i++;

		length = write(fd, text_content, i);
		if (length != i)
			result = -1;
	}


	return (result);
}
