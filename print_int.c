#include "main.h"
/**
 * print_int - print integar
 * @i: arguments
 * Return: dl
 */
int print_int(int i)
{
	int dl;
	dl = print_di(i);
	return (dl);
}
/**
 * print_di - print numbers
 * @arg: argument
 * @result: the pointer integer
 * Return: 0 (success)
 */

int print_di(int n)
{
	int m = 0;
	
	if (n < 0)
	{	_putchar('-');
		m++;
		n = -n;
	}
	if (n / 10)
		m += print_di(n / 10);

	_putchar('0' + n % 10);
	m++;

	return (m);
}

