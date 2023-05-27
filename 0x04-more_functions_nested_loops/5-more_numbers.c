#include "main.h"

/**
 * more_numbers - prints numbers 10 times 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n, i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
