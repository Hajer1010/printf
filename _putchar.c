#include "main.h"

/**
 * _putchar - writes the characters to the stdout
 * @c: the character to print
 *
 * Return: On success 1 or -1 on fail
 *
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
