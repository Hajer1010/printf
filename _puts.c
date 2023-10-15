#include "main.h"
/**
 * _puts - prints string
 * @st: string
 * Return: 0
 */
int _puts(char *st)
{
	int x = 0;
	char *p = "(null)";

	if (!st)
	{
		while (p[x] != '\0')
		{
			_putchar(p[x]);
			x++;
		}
		return (6);
	}
	while (st[x] != '\0')
	{
		_putchar(st[x]);
		x++;
	}
	return ((int)(x));
}
