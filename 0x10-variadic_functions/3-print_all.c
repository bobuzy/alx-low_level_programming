#include "variadic_functions.h"

/**
* print_all - This function prints anything
* @format: This list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *comma = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", comma, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", comma, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", comma, str);
					break;
				default:
					i++;
					continue;
			}
			comma = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
