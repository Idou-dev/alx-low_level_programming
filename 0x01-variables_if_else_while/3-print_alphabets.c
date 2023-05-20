#include <stdio.h>

/**
 * main - the function main
 * Return: always 0
 */

int main(void)
{
	char c, n;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
