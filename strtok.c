#include <stdio.h>
#include <string.h>
/**
 * main - function handles strings
 *
 * Return: always 0
 */
int main(void)
{
	int our_k = 1, our_b;
	char our_string[] = "Hello world how are you doing?";
	char *our_array[7];

	our_array[0] = strtok(our_string, " ");
	while ((our_array[our_k] = strtok(Null, " ")) != NULL)
		our_k++;
	for (our_b = 0; our_b < 7; our_b++)
	{
	if (our_array[our_b] == NULL)
		printf("(nil)");
	else
		printf("%s\n", our_array[our_b]);
	}
	return (0);
}
