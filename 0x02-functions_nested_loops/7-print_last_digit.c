#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: an argument of type int
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -n % 10;
	}
	else
	{
		i = n % 10;
	}
	return (i);
}
