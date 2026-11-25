#include "main.h"

/**
 * print_int - Prints an integer to standard output
 * @args: A va_list pointing to the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list *args)
{
	long num = va_arg(*args, int);
	long div = 1;
	int count = 0;

	/* Handle negative numbers */
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	/* Find the largest power of 10 */
	while (num / div >= 10)
	{
		div = div * 10;
	}

	/* Print each digit one by one */
	while (div > 0)
	{
		_putchar((num / div) + '0');
		count++;
		num = num % div;
		div = div / 10;
	}

	return (count);
}
