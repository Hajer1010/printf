#include "main.h"

/**
 * rev_str - print string in reverse
 * @str: the pointer integer
 * Return: ln
 */

int rev_str(char *str)
{
	int ad = 0;
	int ln = 0;
	int j;

	if (str == NULL)
		return (_puts("(null)"));

	while (str[ln] != '\0')
		ln++;

	for (j = ln - 1; j >= 0; j--)
	{
		_putchar(str[j]);
		ad++;
	}
	return (ad);
}
