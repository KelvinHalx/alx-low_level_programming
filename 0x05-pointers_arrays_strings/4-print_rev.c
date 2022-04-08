#include "main.h"
#include <string.h>

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
  int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
>>>>>>> 2596676a92f6c8c5441104f05d3f0c0e0da3ef37
	_putchar('\n');
}
