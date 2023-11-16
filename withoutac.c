#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the function
 * @ac: represents count
 * @av: represents the vector arguments
 * Return: Always (0)..
 */

int main(int ac, char **av)
{
	int b;

	printf("argv cont is argv[]\n");

	while (*av != NULL)
	{
		printf("argv = %s\n", *av);
		av++;
	}

	return (0);
}
