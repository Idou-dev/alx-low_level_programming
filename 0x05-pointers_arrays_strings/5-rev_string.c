#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a char
 * Return: void
 */

void rev_string(char *s)
{
	int l, i;
	char c;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= l / 2; i--)
	{
		c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
}
