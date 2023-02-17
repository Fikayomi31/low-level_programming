#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to converted
 *
 * Return: converted string
 */
int _atoi1(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		/* checking for - sign */
		if (*s == '-')
			sign *= -1;

		/* checking if it start with digit */
		else if (*s >= '0' && *s <= '9')
			/* updating the digit if it more 1 digit*/
			num = (num * 10) + (*s - '0');

		/* ignoring if the string is not number */
		else if (num > 0)
			break;
	}
	/* looging through the string */
	while (*s++);

	return (num * sign);

}
