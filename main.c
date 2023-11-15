#include "main.h"

/*
* main - Entry point of the shell program
* @b: Number of arguments
* @argv: Array of arguments
* Return: 0
*/

int main(int b, char **argv)
{
	(void)b;

	char *prompt = "(groupshell)>$ ", *Buffer, *cpy_Buff, *token;
	size_t size = 0;
	ssize_t num_chars;
	const char *delim = " \n";
	int j, num_token = 0;

	while (1)
	{
		printf("%s", prompt);
		num_chars = getline(&Buffer, &size, stdin);

		if (num_chars == -1)
		{
			printf("exiting (groupshell)>$ ....\n");
			return (-1);
		}
		cpy_Buff = malloc(sizeof(char) * num_chars);
		if (cpy_Buff == NULL)
		{
		perror("Memory Allocation Failed\n");
			return (-1);
		}
		
		strcpy(cpy_Buff, Buffer);

		token = strtok(Buffer, delim);

		while(token != NULL)
		{
			num_token++;
			token = strtok(NULL, delim);
		}
		num_token++;

		argv = malloc(sizeof(char *) * num_token);

		token = strtok(cpy_Buff, delim);
		for (j = 0; token != NULL; j++)
		{
			argv[j] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[j], token);
			
			token = strtok(NULL, delim);
			printf("%s\n", argv[j]);
		}
		
	/*printf("%s/n", Buffer);*/
	}
	
	free(cpy_Buff);
	free(argv);
	free(Buffer);

	return (0);
}
