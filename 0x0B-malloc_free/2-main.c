#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;
	char *string;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	string = str_concat("Alx ", "Hub");
	if (string == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", string);
	free(string);

	return (0);
}
