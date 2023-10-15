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

	if (format == NULL)
		return (-1);
	va_start(convert, format);
	while (*format)
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
				_putchar(va_arg(convert, int);
				result++; }
			else if (*format == 's')
			{
				char *size = va_arg(convert, char *);

				size++;
				result += (size - 1); }
			else
			{ write(1, format, -1, 2);
				result += 1 }
		}
	format++;
	va_end(convert);
	}
	return (result); }
