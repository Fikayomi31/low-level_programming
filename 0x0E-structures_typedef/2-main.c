#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = NULL;
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);

	return (0);
}
