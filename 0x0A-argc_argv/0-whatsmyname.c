#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program new name without compiling it again
 * @argc: integer argument
 * @argv: string argument
 *
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char *agrv[])
{
	printf("%s\n", agrv[0]);
	return 0;
}
