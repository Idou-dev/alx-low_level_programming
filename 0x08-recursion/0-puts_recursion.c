#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to char
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s != NULL)
		_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
