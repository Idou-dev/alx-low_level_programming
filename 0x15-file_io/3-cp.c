#include "main.h"

/**
 * check_stat - checks file if it is open or closed
 * @n: an integer
 * @s: name of file
 * @fd: file descriptor value
 */

void check_stat(int n, int fd, char *s)
{
	if (n == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	if (n == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}
	if (n == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * main - the main function
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */

int main(int ac, char *av[1])
{
	int fd, fd1, w, n_read = 1024, fd_close, fd1_close;
	char buf[READ_BUF_SIZE];
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		check_stat(1, -1, av[1]);
	fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		check_stat(2, -1, av[2]);
	while (n_read == 1024)
	{
		n_read = read(fd1, buf, sizeof(buf));
		if (n_read == -1)
			check_stat(1, -1, av[1]);
		w = write(fd, buf, n_read);
		if (w == -1)
			check_stat(2, -1, av[2]);
	}
	fd1_close = close(fd1);
	if (fd1_close == -1)
		check_stat(3, fd1, av[1]);
	fd_close = close(fd);
	if (fd_close == -1)
		check_stat(3, fd, av[2]);
	return (0);
}
