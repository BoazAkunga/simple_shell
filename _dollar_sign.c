#include "main.h"

/**
* dollar_sign - prints the dollar sign to stdout,
 * Return: 0 on success.
*/

int dollar_sign(void)
{
	char dromp;
	char *user_name;
	char cw_dir[1024];

	dromp = '#';
	user_name = _getenv("USER");

	if (getcw_dir(cw_dir, sizeof(cw_dir)) == NULL)
	{
	perror("getcw_dir");
	}

	write(STDOUT_FILENO, user_name, _strlen(user_name));
	write(STDOUT_FILENO, ":", 1);
	write(STDOUT_FILENO, cw_dir, _strlen(cw_dir));
	write(STDOUT_FILENO, &dromp, 1);
	write(STDOUT_FILENO, " ", 1);

	return (0);
}
