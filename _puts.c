#include "main.h"
/**
 * _puts - prints string
 * @st: string
 * Return: 0
 */
int _puts(char *st)
{
	int x = 0;

	while (st)
		_putchar(*st);
	st++;
		x++;
	return (x);
}
