#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * @ac: number of argument
 * @av: argument to concatenate
 *
 * Return: pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, len;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
	}
	str = malloc(len * sizeof(str) + 1);

	if (str == 0)
		return (NULL);
	strcpy(str, av[i]);
	return (str);
}
