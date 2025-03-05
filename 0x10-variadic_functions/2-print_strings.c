#include "variadic_functions.h"

/**
 * print_strings - print strings
 * separator: separator between strings
 * @n: number of parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(li, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}

