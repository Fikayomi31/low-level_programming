#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program new name without compiling it again
 * @argc: number of argument
 * @argv: array of  argument pass
 *
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char *agrv[])
{
	printf("%s\n", agrv[0]);
	return 0;
}
