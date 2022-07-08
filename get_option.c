#include "main.h"

/**
*get_op_func -checj for valid specifier
*@s : number
*Return: a pointer to the function ops
*/
int (*get_op_func(const char *format))(va_list)
{
    int i;
    func_t p[] = {
        {"c", _print_char},
        {"s", _print_string},
        {"%", _print_percent},
        //{"d", _print_number},
       // {"i", _print_number},
        {NULL, NULL}
    };

	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t))
        {
            return (p[i].f);
        }
	}
return (NULL);
}
