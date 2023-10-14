#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - printf like-function
 * @format: mandatory parameter
 * @...: variadic parameters
 * Return: count
 *
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printf("%c", format[i]);
		}
		else
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				printf("%d", va_arg(args, int));
			}
			else
			{
				printf("format does not exists");
			}
			i++;
		}
	}

	va_end(args);

	return (0);
}

