#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	char ch;
		
	i = 0;
	
	for (i = 0;  i < 10; i++)
	{

	for (ch = 'a'; ch <= 'z'; ch++)

		{

	_putchar(ch);

		}

	_putchar('\n');

	}
}
