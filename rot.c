#include "main.h"
/**
 * print_rot - encode strings
 * @str: pointer to print
 * Return: count
 */
int print_rot(char *str)
{
	int d = 0;
	int count = 0;

	while (str[d] != '\0')
	{
		if ((str[d] >= 'a' && str[d] < 'm') || (str[d] >= 'A' && str[d] <= 'H'))
		{
			_putchar(str[d] + 13);
			count++;
		}
		else if ((str[d] >= 'n' && str[d] <= 'z') || (str[d] >= 'N' && str[d] <= 'Z'))
		{
			_putchar(str[d] - 13);
			count++;
		}
		else 
		{
			_putchar(str[d]);
			count++;
		}
		d++;
	}
	return (count);
}
