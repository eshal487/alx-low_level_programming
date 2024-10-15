#include "main.h"

/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
	int q;
	
	q = _islower('A');
	_putchar(q + '0');
	q = _islower('b');
	_putchar(q + '0');
	q = _islower(97);
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}
