#include <stdio.h>
/*
 * main - entry point of the Function
 * @argc: The number of command-line arguments
 * @*argv[]: An array of strings representing the command-line arguments
 * @*env[]: An array of strings representing the environment variables.
 * Return: always 0
 */
int main(int argc, char *argv[], char *env[])
{
	for (int count = 0; env[count] != NULL; count++)
		printf("%s\n", env[count]);
	return (0);
}
