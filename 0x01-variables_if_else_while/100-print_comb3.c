#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */

int main(void)
{
	int i, j;

	i = '0';
	while (i <= '9')
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i < '8')
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
