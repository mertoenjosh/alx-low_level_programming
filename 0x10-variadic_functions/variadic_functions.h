#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
#include <stdlib.h>
#include <stdio.h>
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - data type
 *
 * @op: data type argument
 * @f: function
 */

typedef struct type
{
	char *op;
	void (*f)(va_list, char *);
} type_t;

#endif
