#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator : string to be printed between numbers
 * @n : number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < n - 1)
		{
			printf("%d", va_arg(li, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(li, int));
	}
	putchar('\n');
	va_end(li);
}
