#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file's name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, fp, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);
	if (fp == -1 || w == -1)
		return (-1);
	close(fp);
	return (1);
}
