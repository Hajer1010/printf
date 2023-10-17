#include "main.h"
/**
 * rot - encode strings
 * @m: pointer to print
 * Return: m
 */
char *rot(char *s)
{
	int x;
	char en[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char de[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*s == en[x])
			{
				*s = de[x];
				break;
			}
		}
	}
	return (s);
}
