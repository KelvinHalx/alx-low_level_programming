#include "main.h"

/**
 * print_alphabet - check the code
 *
 * print_alphabet: - prints the alphabet
 *
 * Return: Always 0;
 */

void print_alphabet(void)
{
	char y = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(y + i);
	}
	_putchar(10);
}
