#include "main.h"
/**
 * _puts - prints string
 * @st: string
 * Return: 0
 */
int _puts(char *st)
{
	int x = 0;

	while (!st)
		return (write(1, "(null)", 6));
	while (*st)
		x += _putchar(*st++);
	return (x);
}
