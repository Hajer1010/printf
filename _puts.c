#include "main.h"
/**
 * _puts - prints string
 * @st: string
 * Return: 0
 */
int _puts(const char *st)
{
	int x = 0;

	while (st[x] != '\0')
	{
		write(1, &st[x], 1);
		x++;
	}
	write(1, "\n", 1);
	return (x + 1);
}

