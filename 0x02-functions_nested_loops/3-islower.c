#include "main.h"
/**
 * main - function that checks for alphabet
 * @c: if it lower or uppercase
 * Return: if @c is lowercase or ) otherwise
 */
int _islower(int c)
{
	/* ASCII for a & z */
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
