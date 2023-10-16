#include "main.h"
/**
 * print_di - print numbers
 * @convert: argument
 * @result: the pointer integer
 * Return: 0 (success)
 */

int print_di(int n)
{
	int m = 0;

	if (n < 0)
	{	 _putchar('-');
		m++;
		n = -n;
	}
	if (n / 10)
		m += print_di(n / 10);

	_putchar('0' + n % 10);
	m++;

	return (m);
}
