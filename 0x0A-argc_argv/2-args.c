#include "main.h"

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
