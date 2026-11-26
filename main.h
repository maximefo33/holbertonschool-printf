#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the _printf project.
 */

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list *args);
int _print_string(va_list *args);
int _print_int(va_list *args);
int _print_percent(va_list *args);

#endif
