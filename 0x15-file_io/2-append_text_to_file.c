#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of s
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * append_text_to_file - appends text at the end of file
 * @filename: file's name
 * @text_content: text to be append
 * Return: 1 on succes -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		l = _strlen(text_content);
		w = write(fd, text_content, l);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
