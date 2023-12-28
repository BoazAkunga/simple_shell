#include "main.h"

/**
 * _printstr - prints a string to stdout,
 * @string: the string to be printed,
 * Return: Nothing.
 */

void _printstr(const char *string)
{
	while (*string != '\0')
	{
	_putchar(*string);
	string++;
	}
}
