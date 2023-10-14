#include "main.h"
/**
 * _printf - function that prints string
 * @format: format for string
 * Return: result
 */
int _printf(const char *format, ...)
{
	int result = 0, string_length;
	char c, *string;
	va_list convert;

	if (format == NULL)
		return (-1);
	va_start(convert, format);
	while (*format)
	{
		switch (*format)
		{	case '%':
				format++;
				if (*format == '\0')
					break;
		switch (*format)
		{	case '%':
				write(1, format, 1);
				result++;
				break;
			case 'c':
				c = va_arg(convert, int);
				write(1, &c, 1);
				result++;
				break;
			case 's':
				*string = va_arg(convert, char*);
				string_length = 0;
				while (string[string_length] != '\0')
					string_lenght++;
				write(1, string, string_length);
				result += string_length;
				break; }
		break;
		default:
			write(1, format, 1);
			result++;
			break; }
		format++; }
	va_end(convert);
	return (result); }
