#include "main.h"

/**
 * _strcspn - returns the length of characters not specified,
 * @str: The characters specified,
 * @reject: The characters no specified,
 * Return: count of rejected characters.
 */

size_t _strcspn(const char *str, const char *reject)
{
	const char *H;
	size_t counter;

	counter = 0;

	while (*str)
	{
	for (H = reject; *H; H++)
	{
	if (*str == *H)
	{
	return (counter);
	}
	}
	str++;
	counter++;
	}
	return (counter);
}
