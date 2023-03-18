#include <stdio.h>
#include <stdlib.h>

/**
 * main - printball argument it received
 * @agrc: number of agrument
 * @argc: the array that contain argument command
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
