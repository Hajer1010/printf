#include "main.h"
/**
 * _printf - function that prints string
 * @format: format for string
 * Return: result
 */
int _printf(const char *format, ...)
{
	int result = 0, n = 0;
	va_list convert;

	va_start(convert, format);
	while (format[n] != '\0')
	{
		if (format[n] != '%')
		{_putchar(format[n]);
		}
		else
		{
			if (format[n + 1] == '%')
			{_putchar('%');
				n++;
			}
			if (format[n + 1] == 'c')
			{_putchar(va_arg(convert, int));
				n++;
			}
			if (format[n + 1] == 's')
			{
				char *st = va_arg(convert, char *);

				write(1, st, strlen(st));
				n++;
				result += strlen(st); }
		}
		result += 1;
		format++;
	}
	va_end(convert);
	return (result); }
