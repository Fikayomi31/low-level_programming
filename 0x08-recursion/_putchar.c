#include <unistd.h>

/**
 * _putchar - write the character @c to stdout
 * @c: The character to prints
 *
 * Return: a positive number on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
