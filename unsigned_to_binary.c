#include "main.h"

/**
 * handle_b - unsigned to binary
 * @num: the first integer
 * @b: the second integer
 * Return: count
 */

int handle_b(unsigned int num)
{
	if (num > 1)
	{
		handle_b(num / 2);
	}
	_putchar('0' + num % 2);
	return (num);
}
