#include "holberton.h"

/**
 * error_usage - Prints usage error message and exits.
 *
 * Return: Nothing.
 *
 */

void error_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_read - Prints read error message and exits.
 * @file: The name of the file.
 *
 * Return: Nothing.
 *
 */

void error_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error_write - Prints write error message and exits.
 * @file: The name of the file.
 *
 * Return: Nothing.
 *
 */

void error_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error_close - Prints close error message and exits.
 * @fd: The file descriptor number.
 *
 * Return: Nothing.
 *
 */

void error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Where the program starts.
 * @argc: The number of arguments.
 * @argv: The arguments as strings.
 *
 * Return: always 0
 *
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to;
	char buff[1024] = {0};
	int fd_from, fd_to;
	int read_c, wrote_c;

	if (argc != 3)
		error_usage();

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
		error_read(file_from);

	fd_to = open(file_to, O_TRUNC | O_WRONLY);
	if (fd_to < 0)
		fd_to = open(file_to, O_CREAT | O_WRONLY, 0664);
	if (fd_to < 0)
		error_write(file_to);

	while ((read_c = read(fd_from, buff, 1024)))
	{
		if (read_c == -1)
			error_read(file_from);
		wrote_c = write(fd_to, buff, read_c);
		if (wrote_c != read_c)
			error_write(file_to);
	}

	if (close(fd_from) == -1)
		error_close(fd_from);
	if (close(fd_to) == -1)
		error_close(fd_to);

	return (0);
}
