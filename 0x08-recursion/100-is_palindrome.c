#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to char
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * compar - compares each caracter of a string
 * @s: pointer to char
 * @i: first integer
 * @j: second integer
 * Return: 1 on success 0 otherwise
 */

int compar(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + compar(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - detect if a string a palindrome
 * @s: string
 * Return: 1 if s is a palindrome 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compar(s, 0, _strlen_recursion(s) - 1));
}
