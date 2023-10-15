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

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(convert, format);
	while (format[n] != '\0')
	{
		if (format[n] != '%')
		{	_putchar(format[n]);
			result++;
		}
		else
		{
			if (format[n + 1] == '%')
			{	_putchar('%');
				result++;
				n++; }
			else if (format[n + 1] == 'c')
			{	_putchar(va_arg(convert, int));
				result++;
				n++; }
			else if (format[n + 1] == 's')
			{	char *st = va_arg(convert, char *);

				write(1, st, strlen(st));
				result += strlen(st);
				n++; }
		}	result += 1;
		n++;
	}	va_end(convert);
		return (result);
}
