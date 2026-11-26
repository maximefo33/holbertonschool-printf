#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing directives
 *
 * Return: the number of characters printed (excluding the null byte),
 * or -1 on error
 */

int _printf(const char *format, ...)
{
	va_list argc;
	int i = 0;
	int j;
	int count = 0;

	print_t fonction[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'d', _print_int},
		{'i', _print_int},
		{'%', _print_percent},
		{'\0', NULL},
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(argc, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (fonction[j].spec != '\0')
			{
				if (format[i + 1] == fonction[j].spec)
				{
					count += fonction[j].f(&argc);
					break;
				}

				j++;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}

	va_end(argc);
	return (count);
}
