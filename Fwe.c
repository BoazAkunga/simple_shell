#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t C_pid;
	int STATUS;
	int b;
	char *arg[] = {"ls", "-l", "/tmp", NULL};

	for (b = 1; b <= 5; b++)
	{
		C_pid = fork();
		if(C_pid == -1)
		{
			perror("fork error:");
			return (-1);
		}
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
