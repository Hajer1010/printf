#include "main.h"

/**
 * _strlen - a function return the lenth of string
 * @s: the integer to use
 * Return:  lenth of string
 */

int _strlen(char *s)
{
int count;
for (count = 0; *s != '\0'; s++)
	count++;
return (count);
}
