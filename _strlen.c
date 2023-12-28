#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string input
 * Return: string length
*/

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
	length++;
	}
	return (length);
}
