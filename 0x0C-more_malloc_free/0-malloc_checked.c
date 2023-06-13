#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the unsigned int to be used
 * Return: pointer to allocatrd memory
 */

void *malloc_checked(unsigned int b)
{
	/* void work with all type */
	void *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
