#include "main.h"
/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
