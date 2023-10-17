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
 * @n: argument
 * Return: 0 (success)
 */

int print_di(int n)
{
	int m = 0;

	if (n < 0)
	{	m += _putchar('-');
		n = n * -1;
	}
	if (n / 10)
	m += print_di(n / 10);

	m += _putchar('0' + n % 10);


	return (m);
}

