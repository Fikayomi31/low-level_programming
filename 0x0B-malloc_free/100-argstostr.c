#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all argument
 * @ac: agrument count
 * @av: double pointer array of string pass to main
 * Return: Null if it fail or pointer to the new string
 */
char *argstostr(int ac, int **av)
{
	int length, i, j;
	char *result, *index;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the lenght of the concatenates string */
	length = 0;
	for (i = 0; i < ac; i++)
	{
		/* add 1 for newline */
		length += strlen(av[i]) + 1;
	}

	/*allocate the memory for conactenates string */
	result = (char *)malloc(length * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* concatenate the argument */
	index = result;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			*result = av[i][j];
			result++;
		}
		*result = '\n';
		result++;
	}
	return (index);
}
