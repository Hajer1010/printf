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
	char *ptr = s;
	
	while (*s)
	{
		char *f = strchr(en, *s);

			if (f)
			{
				*s = de[f - en];
			
			}
		s++;
	}
	return (ptr);
}
