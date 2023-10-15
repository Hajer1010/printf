#include "main.h"

/**
 * print_di - print numbers
 * @convert: argument
 * @result: the pointer integer
 * Return: 0 (success)
 */

int print_di(va_list convert, int *result)
{
	int l = va_arg(convert, int);
	int ln = 0, i, di;
	int r = l;
	int po = 1;

	if (l < 0)
	{
		_putchar('-');
		(*result)++;
		l = -l;
	}
	while (r != 0)
	{
		r = r / 10;
		ln++;
	}
	while (ln > 0)
	{
		for (i = 1; i < ln; i++)
		{
			po *= 10;
		}
		di = l / po;
		_putchar(di + '0');
		(*result)++;
		l = l % po;
		ln--;
	}
	return (0);
}
