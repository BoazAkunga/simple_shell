#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid, ppid, c_pid;
	
	pid = getpid();
	ppid = getppid();
	
	printf("process ID is: %d\n", pid);
	printf("parent process ID is: %d\n", ppid);
	
	c_pid = fork();
	
	if (c_pid == 0)
	
	{
		printf("this is the child process ID\n");
		printf("parent process ID (PPID): %d\n", getppid());
		printf("current process ID (PID): %d\n\n", getpid());
		printf("===============================\n");
	}
	else if (c_pid > 0)
	{
		printf("this is the parent process ID:\n");
		printf("child process ID (PID): %d\n\n", c_pid);
		printf("===============================\n");
	}
	else
	{
		printf("it failed");
			return (1);
	}
	return (0);
}
