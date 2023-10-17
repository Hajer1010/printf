#include "main.h"
/**
 * print_di - print numbers
 * @n: argument
 * Return: 0 (success)
 */

int print_di(int n)
{
	int m = 0;
	unsigned int k;

	if (n < 0)
	{
		k = -n;
		m += _putchar('-');
	}
	else
		k = n;
	if (n / 10)
	m += print_di(k / 10);

	m += _putchar('0' + k % 10);


	return (m);
}

