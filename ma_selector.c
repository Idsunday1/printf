#include "main.h"
/**
 * ma_selector - select the appropriate printing func. based on format specifier.
 * @str: The format specifier character (c, s and %)
 * Return: A func. pointer to the selected printing func. or NULL if invalid
 */
int (*ma_selector(char str))(va_list args_ls)
{
	if (str == 'c')
	{
		return (&_print_char);
	}
	else if (str == 's')
	{
		return (&_print_string);
	}
	else if (str == '%')
	{
		return (&_print_percent);
	}
	else if (str == 'd')
	{
		return (&_print_d);
	}
}
