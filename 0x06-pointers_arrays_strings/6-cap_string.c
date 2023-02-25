#include "main.h"

/**
 * cap_string - capitalizes of words
 * @c: string to capitalizes
 *
 * Return: 
 */
char *cap_string(char *str)
{
	int i, s;
	/* string containing all the sign */
	char *sign = ",;.!?(){}\" ";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* making the first character capitalized */
		if (i == 0)
		{
			str[i] = toupper(str[i]);
			continue;
		}
		for (s = 0; sign[s]; s++)
		{
			if (str[i - 1] == sign[s])
			{
				str[i] = toupper(str[i]);
				break;
			}
		}

	}
	return (str);
}
