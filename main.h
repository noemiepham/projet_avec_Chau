#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef struct op
{
    char *op;
    int (*f)(va_list)
}op_t;
int (*get_op_func(char s)) (va_list);
char _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list list);
int _print_string(va_list list);
int _print_percent(va_list list);


#endif