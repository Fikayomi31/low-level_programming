#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = 'O';
	str[1] = 'K';
	str[3] = '\0';
	printf("%s\n", str);
	return (0);
}
