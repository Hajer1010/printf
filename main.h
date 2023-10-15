#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int _puts(char *st);
int _printf(const char *format, ...);
int _putchar(char c);
int print_numers(va_list count, int *result);

#endif
