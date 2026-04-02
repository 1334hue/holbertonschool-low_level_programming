#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j, l1 = 0, l2 = 0;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";
	while (s1[l1]) l1++;
	while (s2[l2]) l2++;
	con = malloc(sizeof(char) * (l1 + l2 + 1));
	if (con == NULL) return (NULL);
	for (i = 0; s1[i]; i++) con[i] = s1[i];
	for (j = 0; s2[j]; j++, i++) con[i] = s2[j];
	con[i] = '\0';
	return (con);
}
