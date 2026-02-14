#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcpy - copies string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: return destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	len--;
	return (len);
}

/**
 * new_dog - new instance of a dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name, *temp_owner;
	dog_t *new_puppy;

	temp_name = malloc(sizeof(name) * (_strlen(name) + 1));
	temp_owner = malloc(sizeof(owner) * (_strlen(owner) + 1));
	new_puppy = malloc(sizeof(dog_t));

	if (temp_name && temp_owner && new_puppy)
	{
		_strcpy(temp_name, name);
		_strcpy(temp_owner, owner);
		new_puppy->name = temp_name;
		new_puppy->age = age;
		new_puppy->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_puppy);
		return (NULL);
	}
	return (new_puppy);
}
