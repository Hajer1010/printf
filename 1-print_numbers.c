#include "main.h"

/**
 * print_numbers - function to print all numbers
 * @result: argument for passing
 * Return: 0 (success)
*/

int print_numbers(va_list count, int *result)
{
	int s = 0;
	int n;
	int replace;
	int digit;

	n = va_arg(count, int);
	if (n < 0)
	{
		_putchar('-');
		(*result)++;
		n = -n;
	}
	while (replace != 0)
	{
		replace /= 10;
		s++;
	}
	while (s > 0)
	{
		digit = n / pow(10, s - 1);
		_putchar(digit + '0');
		(*result)++;
		n = n % (int)pow(10, s - 1);
		s--;
	}
	return 0;
}
/**
 * _printf - print numbers
 * @format: argument for passing
 * Return: value
*/
int _printf_int(const char *format, ...)
{
	va_list num;
	int value = 0;
	int i = 0;

	va_start(num, format);
	while (format[i])
	{
		if (format[i] == '%')
			format++;
		if (format[i] == '\0')
			break;
		if (format[i + 1] == 'd' || format[i + 1] == 'i')
			print_numbers(num, &value);
		else
		{
			_putchar(format[i]);
			value++;
		}
		format++;
	}
	va_end(num);
	return value;
}
