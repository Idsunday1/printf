#include "main.h"

/**
 * ma_selector - select the appropriate printing func. based on format specifier
 *
 * @strn: The format specifier character (c, s and %)
 * Return: A func. pointer to the selected printing func. or NULL if invalid
 */
int (*ma_selector(char strn))(va_list args_ls)
{
	if (strn == 's')
	{
		return (&string_print);
	}
	else if (strn == 'c')
	{
		return (&chars_print);
	}
	else if (strn == '%')
	{
		return (&percent_print);
	}
	else if (strn == 'd')
	{
		return (&d_print);
	}
	else if (strn == 'b')
        {
                return (&b_print);
        }
	else if (strn == 'i')
        {
                return (&i_print);
        }
	return (0);
}
