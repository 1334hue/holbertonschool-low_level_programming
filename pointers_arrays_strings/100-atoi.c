#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sig = 1;
	int found = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sig *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			if (sig > 0)
				res = (res * 10) + (s[i] - '0');
			else
				res = (res * 10) - (s[i] - '0');
		}
		else if (found)
		{
			break;
		}
		i++;
	}
	return (res);
}
