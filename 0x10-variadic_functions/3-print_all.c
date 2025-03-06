#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format specifiers.
 * @format: A list of format types.
 */

void print_all(const char * const format, ...)
{
	va_list li;
	int i = 0;
	char *str, *sep = "";

	va_start(li, format);
	while (format && format[i])
	{
		printf("%s", sep);
		switch (format[i])
		{	case 'c':
				printf("%c", va_arg(li, int));
				break;
			case 'i':
				printf("%d", va_arg(li, int));
				break;
			case 'f':
				printf("%f", va_arg(li, double));
				break;
			case 's':
				str = va_arg(li, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(li);
}

