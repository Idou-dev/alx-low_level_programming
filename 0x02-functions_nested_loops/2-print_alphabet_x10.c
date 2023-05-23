#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	int c, i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
