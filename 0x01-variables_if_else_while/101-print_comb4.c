#include <stdio.h>

/**
 * main - the main function
 * Return: always 0
 */

int main(void)
{
	int i, j, k;

	i = '0';
	while (i <= '9')
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
