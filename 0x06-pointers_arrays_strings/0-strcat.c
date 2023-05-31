#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: first pointer to char
 * @dest: second pointer two char
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, ld, ls;

	ld = 0;
	while (dest[ld] != '\0')
	{
		ld++;
	}
	ls = 0;
	while (src[ls] != '\0')
	{
		ls++;
	}
	for (i = 0; i < ls; i++)
	{
		dest[ld + i] = src[i];
	}
	dest[ld + ls] = '\0';
	return (dest);
}
