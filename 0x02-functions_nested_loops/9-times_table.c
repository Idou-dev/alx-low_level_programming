#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: void
 */

void times_table(void)
{
	int i, j, mul, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul > 9)
			{
				l = mul % 10;
				k = (mul - l) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(l + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
		}
		putchar('\n');
	}
}
