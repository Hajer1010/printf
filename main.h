#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int _puts(char *st);
int _printf(const char *format, ...);
int _putchar(char c);
int print_di(va_list convert, int *result);
int handle_b(unsigned int num);
int print_s(va_list convert, int *result);

#endif
