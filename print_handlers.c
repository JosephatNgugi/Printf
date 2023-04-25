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
 *
 * Return: The number of printed characters.
 */
int print_percent(va_list params)
{
	(void)params;

	return (_putchar('%'));
}

/**
 * print_integer - prints an integer
 * @params: Argument list containing the integer
 * to be printed
 *
 * Return: The number of printed characters.
 */
int print_integer(va_list params)
{
	int len = 0, num = va_arg(params, int);

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}

	if (num / 10)
		len += print_integer(num / 10);
	len += _putchar(num % 10 + '0');

	return (len);
}

