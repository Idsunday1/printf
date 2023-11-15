#include "main.h"

/**
 * _printf - a function that prints formatted output based on a format string.
 *
 * @format: format string containing format specifiers
 *
 * Return: No. of characters that is printed.
 */
int _printf(const char *format, ...)
{
	int char_prt = 0;
	va_list args_ls;
	int a;

	va_start(args_ls, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			a++;
			if (format[a] == 's' || format[a] == 'c' || format[a] == 'd'
					|| format[a] == 'b' || format[a] == 'i')
			{
				char_prt += ma_selector(format[a])(args_ls);
			}
			else
			{
				char_prt += _putchar('%');
				char_prt += _putchar(format[a]);
			}
		}
		else
		{
			char_prt += _putchar(format[a]);
		}
	}
	va_end(args_ls);
	return (char_prt);
}

