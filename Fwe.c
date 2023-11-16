#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * main - entry point for my program that forks and executes
 * the "ls -l /tmp" command in 5 child processes.
 * Return: 0 on success, -1 on failure
 */

int main(void)
{
	pid_t C_pid;
	int STATUS;
	int b;
	char *arg[] = {"ls", "-l", "/tmp", NULL};

	for (b = 1; b <= 5; b++)
	{
		C_pid = fork();
		if (C_pid == -1)
		{
			perror("fork error:");
			return (-1);
		}


		if (C_pid == 0)
		{
		execve("/usr/bin/ls", arg, NULL);
		perror("fork error:");
		exit(1);
		}
		else
		{
		wait(&STATUS);
		}
	}
}
