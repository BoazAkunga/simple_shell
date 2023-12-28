#include "main.h"

/**
 * _strcmp - compares a string to another,
 * @f1: First string,
 * @f2: second string,
 * Return: The result of comparison.
 */

int _strcmp(const char *f1, const char *f2)
{
	while (*f1 != '\0' && *f2 != '\0' && *f1 == *f2)
	{
	f1++;
	f2++;
	}
	return (*f1 - *f2);
}
