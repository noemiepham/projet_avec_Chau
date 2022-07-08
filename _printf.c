#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
  unsigned int i;
  int arg;
  int print_string;
  int (*f)(va_list);
  va_list list;

  va_start(list, format);
  if (format == NULL)
    return(-1);
  
  while (format[i])
  {
    if(format[i] == '%')
    {
      if (format[i + 1])
      {
        if (format[i + 1] != 'c' && format[i + 1] != 's'
				&& format[i + 1] != '%' && format[i + 1] != 'd'
				&& format[i + 1] != 'i')
        {
          print_string += _putchar(format[i]);
          print_string += _putchar(format[i + 1]);
          i++;
        }
        else
        {
          f = get_op_func(&format[i + 1]).
          print_string += f(list);
          i++
        }
      }
    }
    else
    {
      _putchar(format[i]);
      print_string++;
    }
  i++;
  }
  va_end(list);
  return(print_string);
}