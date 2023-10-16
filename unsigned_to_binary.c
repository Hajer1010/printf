#include "main.h"

/**
 * handle_b - unsigned to binary
 * @num: the first integer
 * Return: num
 */

int handle_b(unsigned int num)
{
	int s = 0;

	if (num / 2)
	{
		s += handle_b(num / 2);
	}
	_putchar('0' + num % 2);
	s++;

	return (s);
}
