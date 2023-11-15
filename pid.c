#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - Function that returns a process id
 *
 * Return: Always returns process id
 */

int main(void)
{
	printf("%u\n", getpid());
	printf("%u\n", getppid());
	return (0);
}
