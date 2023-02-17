#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *Return: The integer value of the comverted string.
 */

int _atoi(char *str)
{
	// Initialize result

	int res = 0;
 

	// Initialize sign as positive

    	int sign = 1;
 

    	// Initialize index of first digit

    	int i = 0;
 

    	// If number is negative,

    	// then update sign

    	if (str[0] == '-') 
	{

        	sign = -1;
 

        // Also update index of first digit

        i++;

    	}
 

    	// Iterate through all digits

    	// and update the result

    	for (; str[i] != '\0'; i++)

        	res = res * 10 + str[i] - '0';
 

    	// Return result with sign

    	return sign * res;
}
