#include "main.h"

/**
 * set_string - function that set the value of a pointer to a char
 * @s: pointer to pointer value
 * @to: pointer char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
