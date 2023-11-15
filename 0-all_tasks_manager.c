#include "main.h"

/**
 * string_print - a function that prints a string
 *
 * @args_ls: va_list containing the actual string to print
 *
 * Return: no. of chars printed
 */
int string_print(va_list args_ls)
{
	int record = 0;
	char *strn_pt = va_arg(args_ls, char *);

	if (strn_pt == NULL)
	{
		strn_pt = "(null)";
	}
	while (*strn_pt)
	{
		record += _putchar(*strn_pt);
		strn_pt++;
	}
	return (record);
}

/**
 * chars_print - a function that prints a character
 *
 * @args_ls: va_list containing the actual character to print
 * Return: no. of chars printed
 */
int chars_print(va_list args_ls)
{
	int record;
	char charsit = va_arg(args_ls, int);

	record = _putchar(charsit);
	return (record);
}

/**
 * percent_print - a function that prints a percent sign '%'
 *
 * @args_ls: va_list containing the % to print
 *
 * Return: no. of chars printed
 */
int percent_print(va_list args_ls)
{
	(void)args_ls;
	return (_putchar('%'));
}

/**
 * d_print - a function that prints an integer
 *
 * @args_ls: va_list containing the actual integer to print
 *
 * Return: no. of chars printed
 */
int d_print(va_list args_ls)
{
	int record;
	int intit = va_arg(args_ls, int);

	record = int_printer(intit, 0);
	return (record);
}

/**
 * i_print - a function that prints an integer
 *
 * @args_ls: va_list containing the actual integer to print
 *
 * Return: no. of chars printed
 */
int i_print(va_list args_ls)
{
	int record;
	int intit = va_arg(args_ls, int);

	record = int_printer(intit, 0);
	return (record);
}
