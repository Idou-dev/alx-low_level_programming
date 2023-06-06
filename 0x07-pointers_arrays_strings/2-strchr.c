#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: where we want to search for a character
 * @c: the character we want to find
 * Return: pointer to the first occurence of c or Null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
