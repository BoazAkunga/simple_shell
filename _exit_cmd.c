#include "main.h"

/**
 * exeCmds - Executes commands,
 * @commands: Commands to execute,
*/

void exeCmds(char **commands)
{
	pid_t child_pid;
	int k;

	for (k = 0; commands[k] != NULL; k++)
	{
	child_pid = fork();
	if (child_pid == 0)
	{
	if (_strcmp(commands[k], "ls") == 0)
	_ls(".");
	else if (_strcmp(commands[k], "pwd") == 0)
	_pwd();
	else if (_strcmp(commands[k], "clear") == 0)
	clearTerminal();
	else if (_strcmp(commands[k], "exit") == 0)
	exitTerminal();
	else
	{
	execve(commands[k], commands, environ);
	perror("execve");
	exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
	}
	else if (child_pid < 0)
	perror("fork");
	else if (waitpid(child_pid, NULL, 0) == -1)
	perror("waitpid");
	}
}
