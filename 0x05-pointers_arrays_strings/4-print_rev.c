#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to an char
 * Return: void
 */

void print_rev(char *s)
{
	int l, i;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
