#include "main.h"
/**
 * _printf - function that prints string
 * @format: format for string
 * Return: result
 */
int _printf(const char *format, ...)
{	int result = 0, n = 0;
	va_list convert;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(convert, format);
	while (format[n] != '\0')
	{
		if (format[n] != '%')
		{	_putchar(format[n]);
			result++;
		} else
		{
			if (format[n + 1] == '%')
			{	result += _putchar('%');
				n++; } else if (format[n + 1] == 'r')
			{	char *s = va_arg(convert, char *);

				result += rev_str(s), n++; }
			else if (format[n + 1] == 'd' || format[n + 1] == 'i')
			{	int number = va_arg(convert, int);

				result += print_di(number);
				n++; }	else if (format[n + 1] == 'b')
			{	unsigned int num = va_arg(convert, unsigned int);
				result += handle_b(num);
			n++; } else if (format[n + 1] == 'R')
			{	char *r = va_arg(convert, char *);
				result += rot(r), n++; }
			else if (format[n + 1] == 'c')
			{	result += _putchar(va_arg(convert, int));
				n++; } else if (format[n + 1] == 's')
			{	result += _puts(va_arg(convert, char *));
				n++; }
		}	n++;
		} va_end(convert);
		return (result); }
