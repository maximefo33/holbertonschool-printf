#include "main.h"

/**
 * print_char - prints a single character
 * @args: pointer to the list of arguments
 *
 * Return: 1
 */



int print_chars(va_list, *args) /* pointeur vers la liste d'arguments */
{
	char c;
	c = va_arg(*args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string of characters
 * @args: pointer to the list of arguments
 *
 * Return: number of characters printed
 */


int print_string(va_list, *args)
{
	char *str;
	int i

	str = va_arg(*arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
