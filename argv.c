#include <stdio.h>
/*
 * main - entry point of the function
 * @argc - resents count
 * @argv - represents the vector arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; argv[count] != NULL; count++)

		printf("%s\n", *argv);

	while (*argv != NULL)
		printf("%s\n", *argv), argv++;
	return (0);

}
