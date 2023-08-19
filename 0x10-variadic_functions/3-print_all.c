#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format type
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0;
	char *s, *sep = "";

	va_start(p, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(p, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(p, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(p, double));
					break;
				case 's':
					s = va_arg(p, char *);
					if (s == 0)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(p);
}
