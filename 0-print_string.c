#include "main.h"
/**
 * print_s - print string
 * @result: result
 * @convert: arg
 * Return: result
*/
int print_s(va_list convert, int *result)
{
	int ln = 0;
	char *st = va_arg(convert, char *);

	if (!st)
	{
		st = "(null)";
	}
	while (st[ln])
	ln++;
	_puts(st);
	result += ln;
	return (*result);
}
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
		} else
		{
			if (format[n + 1] == '%')
			{	_putchar('%');
				result++;
				n++; }	else if (format[n + 1] == 'd' || format[n + 1] == 'i')
			{	print_di(convert, &result);
				result++;
				n++; }	else if (format[n + 1] == 'b')
			{	unsigned int num = va_arg(convert, unsigned int);
				result += handle_b(num);
			n++; }
			else if (format[n + 1] == 'c')
			{	_putchar(va_arg(convert, int));
				result++;
				n++; }	else if (format[n + 1] == 's')
			{	print_s(convert, &result);
				n++; }
		}	n++;
	}	va_end(convert);
		return (result);
		_putchar('\n'); }
