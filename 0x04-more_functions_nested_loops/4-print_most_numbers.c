#include "main.h"

/**
 * print_most_numbers-prints numbers from 0 to 9 except 2 & 4
 *
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int c;

	while (c == 48 && c < 58 && c != 50 && c != 52)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}	+
