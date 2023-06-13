#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
