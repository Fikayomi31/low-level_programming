#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - length of the string
 * @s: pointer to the string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copy string from one source and dest
 * @dest: destination for the string
 * @src: source for the string
 *
 * Return: dest for the string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);

}

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: pointer to the new dog otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *d;

	/* length of the dog name and owner */
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	
	/* allocate memory to d */
	d = malloc(sizeof(dog_t));
	
	if (d == NULL)
		return (NULL);
	
	/* allocate memomry to dog->name */
	d->name = malloc(sizeof(char) * (len_name + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	/* allocate memory to dog->owner */
	d->owner = malloc(sizeof(char) * (len_owner + 1));

	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	/* using _strcpy to copy */
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;


	return (d);

}
