#include "main.h"

/**
 * main - check the code for ALXSchool students.
 *
 * Return: Always 0
 */
int main(void)
{
	char *s, *str;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	str = _strdup("What a way to go");
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);
	return (0);
}
