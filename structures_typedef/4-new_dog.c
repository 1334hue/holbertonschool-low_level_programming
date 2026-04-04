#include <stdlib.h>
#include "dog.h"

int _strlen(char *s)
{
	int i = 0;
	while (s && s[i]) i++;
	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++) dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	if (name == NULL || owner == NULL) return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL) return (NULL);

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog->name = malloc(l1 + 1);
	if (dog->name == NULL) { free(dog); return (NULL); }

	dog->owner = malloc(l2 + 1);
	if (dog->owner == NULL) { free(dog->name); free(dog); return (NULL); }

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
