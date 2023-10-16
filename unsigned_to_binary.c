#include "main.h"

/**
 * handle_b - unsigned to binary
 * @num: the first integer
 * @b: the second integer
 * Return: count
 */

int handle_b(int num, int b)
{
	int count = 0;
	int lead = 1;
	int n;

	if (num < 0 && b == 10)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	for (n = 31; n >= 0; n--)
	{
		char digit = (num >> n) && 1;

		if (digit == 1)
		{
			lead = 0;
		}
		if (!lead)
		{
			count += _putchar(digit + '0');
		}
	}
	if (count == 0)
	{
		count += _putchar('0');
	}
	return (count);
}
