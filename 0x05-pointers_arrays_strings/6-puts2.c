#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
