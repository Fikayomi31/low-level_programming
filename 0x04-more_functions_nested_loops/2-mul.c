#include "main.h"
#include <stdio.h>
/**
 * mui - print multiplies of two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 always
 */
int mul(int a, int b)
{
	return (a * b);
}
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
