#include "main.h"

/**
 * _print_percent - Prints a percent character.
 * @args: Pointer to the argument list (unused).
 *
 * Return: 1 on success, -1 on failure.
 */
int _print_percent(va_list *args)
{
	(void) args;
	return (_putchar('%'));
}
