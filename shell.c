#include <stdio.h>
#include <unistd.h>
/*
 * main - entry point of program
 * @argc: number of arguement
 * @*argv[]: array of strings for command argument
 * @*env[]: strings represents environment virable
 * Return: always zero
 */
extern char **envrion;

int main(int argc, char *argv[], char *env[])
{
	char *dev[] = {"/bin/ls", "-l", NULL};

	execve(dev[0], dev, env);
	return (0);
}
