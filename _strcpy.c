#include "main.h"

/**
 * _strcpy - Copies a string,
 * @dest_nation: destination,
 * @source: Source,
 */

void _strcpy(char *dest_nation, const char *source)
{
	while (*source != '\0')
	{
	*dest_nation = *source;
	dest_nation++;
	source++;
	}

    /* Add the null terminator at the end of the destination string */
	*dest_nation = '\0';
}
