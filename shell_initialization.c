#include "main.h"

/**
 * shell_init - this initializes the shell, providing the name and username,
*/

void shell_init(void)
{
	char *user_name;
	ssize_t input_read;
	char user_inputer[256];

	_clear();
	user_name = _getenv("USER");

	if (user_name != NULL)
	{
	write(STDOUT_FILENO, "\n\n\nUSER is: @", 13);
	write(STDOUT_FILENO, user_name, _strlen(user_name));
	write(STDOUT_FILENO, "\n", 1);
	}
	else
	{
	write(STDOUT_FILENO, "\n\n\nEnter your username: ", 24);
	input_read = read(STDIN_FILENO, user_inputer, sizeof(user_inputer) - 1);

	if (input_read > 0)
	{
	user_inputer[input_read - 1] = '\0';
	user_name = _strdup(user_inputer);

	if (user_name != NULL)
	{
	write(STDOUT_FILENO, "\n\n\nUSER is: @", 13);
	write(STDOUT_FILENO, user_name, _strlen(user_name));
	write(STDOUT_FILENO, "\n", 1);
	}
	else
	{
	write(STDOUT_FILENO, "\n\n\nUnable to allocate memory for username.\n", 43);
	}
	}
	else
	{
	write(STDOUT_FILENO, "\n\n\nError reading username.\n", 28);
	}
	}
	sleep(1);
	_clear(); }
