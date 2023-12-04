#include "main.h"

/**
 * main - the main function
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int fd, w;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	w = read(fd, &buf[0], *av[1]);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	w = write(fd, buf, w);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	w = close(fd);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}
	return (0);
}
