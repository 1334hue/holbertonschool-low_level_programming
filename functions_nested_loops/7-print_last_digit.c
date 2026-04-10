#include "main.h"
int print_last_digit(int n)
{
	int l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
