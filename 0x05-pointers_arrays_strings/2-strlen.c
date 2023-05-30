#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to char
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}