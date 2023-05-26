#include "main.h"

/**
 * _strdup - pointer to a new allocated space in memory which contain the
 * copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if memory is insufficient
 */

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == 0)
		return (NULL);
	/* length of the string str */
	for (i = 0; str[i] != '\0'; i++)
	
	/* allocate memory to dup */		
	dup = malloc(i * sizeof(*dup) + 1);
	/* checking if dup is not 0 */
	if (dup == 0)
		return (NULL);
	/*copy str to dup */
	strcpy(dup, str);
	return (dup);

}
