#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	if (!strcmp(av[1], "Askme!"))
	{
		printf("OK!\n");
	}
	else
	{
		printf("Try again :)\n");
	}
	return (0);
}
