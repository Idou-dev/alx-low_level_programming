#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a s
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == 0)
		return (0);
	l++;
	return (l + _strlen_recursion(s + 1));
}
