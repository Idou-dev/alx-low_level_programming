#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i <= 99)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
