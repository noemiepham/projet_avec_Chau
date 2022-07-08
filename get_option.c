#include "main.h"

/**
*get_op_func -checj for valid specifier
*@s : number
*Return: a pointer to the function ops
*/
int (*get_op_func(char s)) (va_list)
{
    op_t ops[] = {
        {'c', _print_char}
        {'s', _print_string}
        {'%', _print_percent}
        {'d', _print_number}
        {'i', _print_number}
        {NULL, NULL}
    };
    int i = 0;

	while (ops[i].t;)
	{
		if (*fomart == *(p[i].t))
        {
            return (ops[i].f)
        }
		i++;
	}
return (NULL);
}