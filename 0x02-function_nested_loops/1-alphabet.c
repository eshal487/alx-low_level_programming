#include "main.h"

/**
 * print_alphabet - print out all the alphabet
 * Return: 0 success
 */

void print_alphabet(void)
{	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(letters[i]);
	}
		 _putchar('\n');
}


