#include "main.h"
/**
 * _strlen - returns length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
