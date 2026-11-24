#include "main.h"





int print_chars(va_list, *args) /* pointeur vers la liste d'arguments */
{
	char c = (char)va_arg(*args, int);
	/* ici int*/

	return (_putchar(c));
}


int print_string(va_list, *args)
{
	char *str = va_arg(*arg, char *);
}