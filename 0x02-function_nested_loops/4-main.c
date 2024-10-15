#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int q;

	q = _isalpha('A');
	_putchar(q + '0');
	q = _isalpha('b');
	_putchar(q + '0');
	q = _isalpha(97);
	_putchar(q + '0');
	q = _isalpha('#');
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}
