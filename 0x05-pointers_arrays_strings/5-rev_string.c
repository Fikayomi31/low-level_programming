#include "main.h"
/**
 * rev_string - print reverse  string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char c; /* to hold a string */
	int i; /* to get length of string */
	int index; /* index to print normal s */
	int rev; /* rev of string s */

	/* length of the string */
	for (i = 0; s[i]; i++)
		continue;
	index = 0; /* start of string */
	rev = i - 0; /* start from end string */
	while (!(index >= rev))
	{
		c = s[index];
		s[index] = s[rev];
		s[rev] = c;
		index++;
		rev--;
	}
}
