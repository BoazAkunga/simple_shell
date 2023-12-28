#include "main.h"

/**
 * _strncmp - copies size w of z2 to z1,
 * @z1: destination string,
 * @z2: source string,
 * @w: Length of z2 to copy to z1,
 * Return: ) on success
 */

int _strncmp(const char *z1, const char *z2, size_t w)
{
/* declare variables to be used */
	size_t i;

/* iterate through the strings and copy */
	for (i = 0; i < w && (z1[i] != '\0' || z2[i] != '\0'); i++)
	{
	if (z1[i] != z2[i])
	{
	return ((z1[i] < z2[i]) ? -1 : 1);
	}
	}
/* Return 0 if both are equal */
	return (0);
}
