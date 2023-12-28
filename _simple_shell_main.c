#include "main.h"

/**
 * main-takes arguments from user and interprets it
 * for use by the operating system
 * Return: zero if successful, otherwise 1
*/

int main(void)
{
	int j;
	char **commands, *line_up;
	size_t length;
	ssize_t read;

	shell_init(); /* Shell startup */

	while (1)
	{
	dollar_sign(); /* Print $ */
	fflush(stdout);
	line_up = NULL;
	length = 0;
	read = getline(&line_up, &length, stdin);
	if (read != -1)
	{
	line_up[_strcspn(line_up, "\n")] = '\0';
	commands = processInput(line_up);
	if (commands == NULL)
	{
	break;
	}
	exeCmds(commands);
	for (j = 0; commands[j] != NULL; j++)
	{
	free(commands[j]);
	}
	free(commands);
	}
	else
	{
	perror("getline");
	}
	free(line_up); /* Free dynamically allocated memory */
	}
	return (0);
}
