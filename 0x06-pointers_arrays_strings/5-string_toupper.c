#include "main.h"

/**
 * string_toupper - changes lowercase letters to upper
 * @s: pointer to char
 * Return: pointer to char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97)
			s[i] = s[i] - 32;
	}
	return (s);
}
