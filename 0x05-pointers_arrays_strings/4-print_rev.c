#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to an char
 * Return: void
 */

void print_rev(char *s)
{
	int i, l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (i = l - 1; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
