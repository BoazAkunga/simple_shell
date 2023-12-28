#include "main.h"

/**
* processInput - processes user input,
 * @line: line to process,
 * Return: Token,
*/

char **processInput(char *line)
{
	char *token;
	char **tipens;
	int counter;

line[_strcspn(line, "\n")] = '\0';

	token = strtok(line, " ");

	if (token == NULL)
	{
	return (NULL);
	}
	tipens = malloc(sizeof(char *));
	if (tipens == NULL)
	{
	perror("malloc");
	exit(EXIT_FAILURE);
	}
	tipens[0] = strdup(token);

	counter = 1;
	while ((token = strtok(NULL, " ")) != NULL)
	{
	tipens = realloc(tipens, (counter + 1) * sizeof(char *));
	if (tipens == NULL)
	{
	perror("realloc");
	exit(EXIT_FAILURE);
	}
	tipens[counter] = strdup(token);
	counter++;
	}
	tipens = realloc(tipens, (counter + 1) * sizeof(char *));
	if (tipens == NULL)
	{
	perror("realloc");
	exit(EXIT_FAILURE);
	}
	tipens[counter] = NULL;
	return (tipens);
}
