#include "main.h"

/**
 * exec_cmd - Forks a new process and executes a given command.
 * @cmd: Command to execute.
 */

void exec_cmd(const char *cmd)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Fork error");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{

		if (execlp(cmd, cmd, (char *)NULL) == -1)
		{
			perror("Command has not been found");
			exit(EXIT_FAILURE);
		}
	}
	else
	{

		if (waitpid(child_pid, &status, 0) == -1)
		{
			perror("Waitpid error");
			exit(EXIT_FAILURE);
		}
	}
}

/**
 * main - Entry point 4 the simple shell program.
 * Return: Always 0.
 */

int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];

	while (1)
	{
		printf("simple_shell> ");

		if (fgets(cmd, MAX_COMMAND_LENGTH, stdin) == NULL)
		{
			printf("\n");
			break;
		}

		if (cmd[strlen(cmd) - 1] == '\n')
		{
			cmd[strlen(cmd) - 1] = '\0';
		}

		exec_cmd(cmd);
	}

	return (0);
}
