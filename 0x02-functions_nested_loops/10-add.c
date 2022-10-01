#include "main.h"
#include <stdio.h>
/**
 * add - add two integers
 * @i1: integer 1
 * @i2: integer 2
 * Return: i1 + i2
 */
int add(int i1, int i2)
{
	/* addition of the two int */
	return (i1 + i2);
}
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
