#include <stdio.h>

int Add(int a, int b)
{
	return (a+b);
}
int main(void)
{
	int c;
	int (*p)(int, int);

	p = &Add;

	c = p(2, 3);

	printf("%d\n", c);
	return (0);
}
