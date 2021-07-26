#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string being copied.
 *
 * Return: NULL if string is NULL, On success, returns the
 * string or if it fails, returns NULL.
 */

char *_strdup(char *str)
{
	char *src, *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	src = malloc(len + 1);
	p = src;

	if (p == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (src);
}

/**
 * new_dog - mallocs new dog string.
 *
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
