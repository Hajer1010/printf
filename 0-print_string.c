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
		{
			write(1, format, 1)
				result++; }
		else
		{
			if (*format == '\0')
			break;
			if (*format == '%')
			{
				write(1, format, 1);
				result++; }
			if (*format == 'c')
			{
				char c = va_arg(convert, int);

				write(1, &c, 1);
				result++; }
			if (*format == 's')
			{
				char *string = va_arg(convert, char*);
				int string_length = 0;

				while (string[string_length] != '\0')
					string_lenght++;
				write(1, string, string_length);
				result += string_length; }
		}
	format++;
	va_end(convert);
	}
	return (result);
}
