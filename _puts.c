#include "main.h"
/**
 * _puts - prints string
 * @st: string
 * Return: 0
 */
int _puts(char *st)
{
	int x = 0, y = 0, z;
	char *p = "(null)";

	if (!st)
	{
		for (z = 0; z < 6; z++)
			_putchar(p[z]);
		return (z);
	}
	while (st[x] != '\0')
	{
		_putchar(st[x]);
		y++;
		x++;
	}
	return (y);
}
