#include <stdio.h>

int main(int argv, char *argc[])
{
	int count;
	printf("This program was called with \"%s.\n", argv[0]);

	if (count > 1)
	{
		for (count = 1; count < argv; count++)
		{
			printf("argv[%d] =v%s\n", count, argc[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}
	return (0);
}
