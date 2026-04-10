#include "main.h"
/**
 * leet - encodes into 1337
 * @s: string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; l[j]; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}
	return (s);
}
