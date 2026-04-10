#include "main.h"
/**
 * rot13 - encodes using rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
