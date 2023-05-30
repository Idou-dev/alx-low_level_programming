#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j])
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
