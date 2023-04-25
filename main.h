#ifndef MAIN_H
#define MAIN_H

/******** C Standard library headers ********/
#include <stdarg.h>
#include <unistd.h>

/******** Typedef and Structs ********/
/**
 * struct conversion - Represents a conversion specifier and
 * its corresponding handler function
 * @specifier: Character representing the conversion specifier
 * @handler: Function pointer to the handler function for the specifier
 */
typedef struct conversion
{
	char specifier;
	int (*handler)(va_list);
} conversion_t;

/******** Function prototypes ********/

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_spec_func(char specifier))(va_list);

#endif /* MAIN_H */
