#include "main.h"

/**
 * _strlen - returns a length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int l;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write
 * into the file
 * Return: 1 on success -1 on the failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, nlet;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	nlet = _strlen(text_content);
	w = write(fd, text_content, nlet);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
