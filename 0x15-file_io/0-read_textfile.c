#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file name
 * @letters: number of letters to be read and printed
 * Return: the actual number of letters it could read and print
 * or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, o;

	if (filename == NULL)
		return (0);
	o = open(filename, O_CREAT);
	if (o == -1)
		return (0);
	w = write(1, filename, letters);
	if (w == -1)
		return (0);
	close(o);
	return (w);
}
