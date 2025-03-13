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
		switch (format[i])
		{	case 'c':
				printf("%s%c" ,sep,  va_arg(li, int));
				break;
			case 'i':
				printf("%s%d" ,sep,  va_arg(li, int));
				break;
			case 'f':
				printf("%s%f" ,sep,  va_arg(li, double));
				break;
			case 's':
				str = va_arg(li, char *);
				if (!str)
					printf("(nil)");
				else
					printf("%s%s",sep, str);
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

