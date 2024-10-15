#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int q;
	print_last_digit(98);
	print_last_digit(0);
	q = print_last_digit(-1024);
	_putchar('0' + q);
	_putchar('\n');
	return (0);
}
