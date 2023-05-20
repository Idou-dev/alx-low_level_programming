#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q')
		{
			if (n != 'e')
				putchar(n);

		}
	}
	putchar('\n');
	return (0);
}
