#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
