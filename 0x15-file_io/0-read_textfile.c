#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to be read
 * @letters:  number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t length = 0, final_length = 0;
	int fd = 0;
	char *buff = NULL;


	if (filename == NULL)
		return (length);

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (length);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (length);
	length = read(fd, buff, letters);
	final_length = write(STDOUT_FILENO, buff, length);
	if (final_length != length)
		length = 0;
	close(fd);
	free(buff);
	return (length);
}
