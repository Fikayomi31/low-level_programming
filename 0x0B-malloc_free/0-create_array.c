#include "main.h"

/**
 * create_array - that creates an array of chars, and initializes 
 * it with a specific char
 * @size: size of the array
 * @c: array of chars
 * Return: pointer to the array or NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	
	if (size == 0)
		return (NULL);
	
	/* creat a malloc */
	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (0);

	/* looping throught the array of allocated memory */
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
