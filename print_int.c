#include "main.h"
int write_number(unsigned int);
/**
 * print_di - print numbers
 * @convert: argument
 * @result: the pointer integer
 * Return: 0 (success)
 */

int print_di(va_list convert, int *result)
{
	int m = va_arg(convert, int);
	int rep = m;
	int len = 0;
	int po = 1;
	int i;

	if (m == 0)
	{	(*result) += _putchar('0');
	}
	if (m < 0)
	{	_putchar('-');
		m = -m;
		(*result) += m; }
	while (rep != 0)
	{	rep = rep / 10;
		(*result) += rep;
		len++; }
	for (i = 1; i < len; i++)
	{	po *= 10;
		(*result) += po; }
	while (len > 0)
	{	int di = m / po;

		_putchar(di + '0');
		(*result) += di;
		m = m % po;
		(*result) += m;
		po = po / 10;
		(*result) += po;
		len--; }
	return (*result);
}
