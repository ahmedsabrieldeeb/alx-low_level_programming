#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_str(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_char(va_list args);

/**
 * struct op - operation
 * @op: print type
 * @func: function
 */

typedef struct op
{
	char op;
	void (*fun)(va_list);
} op_t;

#endif
