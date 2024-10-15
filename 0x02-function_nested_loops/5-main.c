#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int q;

	q = print_sign(97);
	_putchar(',');
	_putchar(' ');
	_putchar(q + '0');
	_putchar('\n');
	q = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(q + '0');
	_putchar('\n');
	q = print_sign(-5);
	_putchar(',');
	_putchar(' ');
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}
