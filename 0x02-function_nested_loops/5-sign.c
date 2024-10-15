#include "main.h"

/**
 * print_sign - show the sign of the number
 * @c: the number which is checked
 * Return: 1 for positive number ,
 * -1 for negative number or 0 for anything else
 */

int print_sign(int c)
{
	
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
