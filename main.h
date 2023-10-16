#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _puts(char *st);
int _printf(const char *format, ...);
int _putchar(char c);
int print_di(va_list convert, int *result);
int handle_b(unsigned int num);

#endif
