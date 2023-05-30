#include "main.h"

/**
 * main - check the code for ALXSchool students.
 *
 * Return: Always 0
 */
int main(void)
{
	char *s, *str, *new_str;

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

	new_str = _strdup("Never give up");
	if (new_str == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
