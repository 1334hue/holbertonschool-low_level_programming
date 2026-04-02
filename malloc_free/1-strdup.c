#include "main.h"

char *_strdup(char *str)
{
	char *s;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	while (str[r] != '\0')
		r++;
	s = malloc(sizeof(char) * (r + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	return (s);
}
