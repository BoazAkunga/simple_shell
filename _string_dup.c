#include "main.h"

/**
 * _strdup - duplicates a string,
 * @string_1: string to duplicate,
 * Return: Duplicated string.
 */

char *_strdup(const char *string_1)
{
	size_t length;
	char *string2;

	if (string_1 == NULL)
	{
	return (NULL);
	}

/* calculate length of string */
	length = _strlen(string_1);
	string2 = (char *) malloc((length + 1) * sizeof(char));

	if (string2 != NULL)
	{
	_strcpy(string2, string_1);
	}

	return (string2);
}

/**
 * free_string - frees string space
 * @string_1: string to free,
 */

void free_string(char *string_1)
{
	free(string_1);
}

