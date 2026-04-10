#include "main.h"
/**
 * puts_half - prints half
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;
	n = (i + 1) / 2;
	for (i = n; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
