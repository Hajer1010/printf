#include "main.h"
/**
 * rot - encode strings
 * @s: pointer to print
 * Return: m
 */
char *rot(char *s)
{
	char *en = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *de = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char ptr = *s;
	char r = ptr;
	int c = 0;

	if (s == NULL)
		return (_puts("(null)"));
	while (*s)
	{
		if (ptr >= 'A' && ptr <= 'Z')
		{
			r = 'A' + (ptr - 'A' + 13) % 26;
		}
		else if (ptr >= 'a' && c <= 'z')
		{
			r = 'a' + (ptr - 'a' + 13) % 26;
		}
		_putchar(r);
		c++;
		s++;
	}
	return (c);
}
