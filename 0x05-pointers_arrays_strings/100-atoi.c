#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: the string
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int num = 0;
	char *str;

	while (*s != '\0')
	{
		if (*s == '-')
			num *= -1;
		else if (*s == '+')
			num *= +1;
		else if (isdigit(*s))
		{
			str = s;
			break;
		}
		s += 1;

	}
	i = atoi(str);
	if (i == 0)
		return (0);
	return (i * num);
}
