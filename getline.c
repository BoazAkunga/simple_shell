#include <stdio.h>
#include <stdlib.h>
/**
 * main - Functions thats prints the $ sign
 *
 * Return: always 0
 */
int main(void)
{
	char *our_lineptr = NULL;
	size_t w = 0;

	printf("$");
	getline(&our_lineptr, &n, stdin);
	printf("%s", our_lineptr);
	free(our_lineptr);

	return (0);
}
