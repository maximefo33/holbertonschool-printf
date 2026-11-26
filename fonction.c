#include "main.h"

/**
 * print_char - prints a single character
 * @args: pointer to the list of arguments
 *
 * Return: 1
 */

int print_chars(va_list *args) /* pointeur vers la liste d'arguments */
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

int print_string(va_list *args)
{
    char *str;
    int i;

    str = va_arg(*args, char *);
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

/**
 * print_percent - prints a percent sign
 * @args: unused pointer to va_list
 *
 * Return: 1
 */

int _print_percent(va_list *args)
{
    (void)args;
    return (_putchar('%'));
}

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
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
