#include "main.h"

/**
 * print_di - print numbers
 * @convert: argument
 * @result: the pointer integer
 * Return: 0 (success)
 */

int print_di(va_list convert, int *result)
{
	int m = va_arg(convert, int);
	int len = 0;
	int  rep = m;
	int po = 1;
	int i;

	if (m < 0)
	{
		_putchar('-');
		(*result)++;
		m = -m;
	}
	while (rep != 0)
	{
		rep = rep / 10;
		len++;
	}
	for ( i = 1; i < len; i++)
	{
		po *= 10;
	}
	while (len > 0)
	{
		int di = m / po;
		_putchar(di + '0');
		(*result)++;
		m = m % po;
		len--;
	}
	return (*result);
}
