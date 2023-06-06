#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: where we want to search for a character
 * @c: the character we want to find
 * Return: pointer to the first occurence of c or Null
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
