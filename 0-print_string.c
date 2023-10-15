#include "main.h"
/**
 * _printf - function that prints string
 * @format: format for string
 * Return: result
 */
int _printf(const char *format, ...)
{
	int result = 0;
	va_list convert;

	if (*format == '\0')
		return (-1);
	va_start(convert, format);
	while (*format != '\0')
	{
		if (*format != '%')
			_putchar(*format);
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{ _putchar(*format);
		       result++; }
			else if (*format == 'c')
			{
				_putchar(va_arg(convert, int));
				result++; }
			else if (*format == 's')
			{
				char *st = va_arg(convert, char *);

				write(1, st, strlen(st));
				result += strlen(st); }
		}
		format++;
	}
	va_end(convert);
	return (result); }
