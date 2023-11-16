#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_TOKENS 100

int main(void)
{
    char *prompt = "(groupshell)>$ ";
    char *buffer = NULL;
    size_t size = 0;
    ssize_t num_chars;
    const char *delim = " \n";
    
    while (1)
    {
        write(1, prompt, strlen(prompt));

        num_chars = getline(&buffer, &size, stdin);

        if (num_chars == -1)
        {
            write(1, "Exiting (groupshell)>$ ....\n", 29);
            free(buffer);
            return 0;
        }

        char *cpy_buff = strdup(buffer);

        if (cpy_buff == NULL)
        {
            perror("Memory Allocation Failed");
            free(buffer);
            return -1;
        }

        char *tokens[MAX_TOKENS];
        char *token = strtok(cpy_buff, delim);
        int num_tokens = 0;

        while (token != NULL && num_tokens < MAX_TOKENS)
        {
            tokens[num_tokens] = strdup(token);
            token = strtok(NULL, delim);
            num_tokens++;
        }

        for (int j = 0; j < num_tokens; j++)
        {
            write(1, tokens[j], strlen(tokens[j]));
            write(1, "\n", 1);
            free(tokens[j]);
        }

        free(cpy_buff);
    }

    free(buffer);

    return 0;
}
