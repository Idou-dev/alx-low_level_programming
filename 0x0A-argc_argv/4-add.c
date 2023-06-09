#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *c;
	unsigned int k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (k = 0; k < strlen(c); k++)
			{
				if (c[k] < 48 || c[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
