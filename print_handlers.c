#include "main.h"

/**
 * print_char - prints a character
 * @params: Argument list containing the character
 * to be printed
 *
 * Return: The number of printed characters.
 */
int print_char(va_list params)
{
	char c = va_arg(params, int);

	return (_putchar(c));
}

/**
 * print_string - prints a string
 * @params: Argument list containing the character
 * to be printed
 *
 * Return: The number of printed characters.
 */
int print_string(va_list params)
{
	char *str = va_arg(params, char *);
	int len = 0;

	if (str == NULL)
		str = "(nil)";

	while (*str)
	{
		len += _putchar(*str);
		str++;
	}
	return (len);
}

/**
 * print_percent - prints a percent symbol
 * @params: Argument list
 * to be printed
 *
 * Return: The number of printed characters.
 */
int print_percent(va_list params)
{
	(void)params);

	return (_putchar('%'));
}
