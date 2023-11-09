#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints anything
 * @format: Alist of types of arguments passed to the function
 * @...: A variable number of additional arguments.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *fmt = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", fmt, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", fmt, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", fmt, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", fmt, str);
					break;
				default:
					i++;
					continue;
			}
			fmt = ", ";
			i++;
		}
		printf("\n");
		va_end(list);
	}
}
