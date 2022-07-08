#include "main.h"
#include <stdarg.h>
/**
 * _printfChar - print char
 * 
*/
 int _print_char(va_list list)
{
  int c = 0;

  c = va_arg(list, int);
  _putchar(c);
  return (1);
}
/**
 * print_string - print string
 *
 *
 */

#include <stdarg.h>

int _print_string(va_list list)
{
  int count = 0;
  char *string_Array;
  string_Array = va_arg(list, char *);
  if (string_Array == NULL)
  {
    string_Array = "(NULL)";
  }

  while (string_Array[count]!= '\0')
  {
    _putchar(string_Array[count]);
    count++;
  }
  return(count);
}
/**
 * print_percent- print %
 *
 *
 */
int _print_percent(va_list list)
{
	(void)list;
	return (write(1, "%", 1));
}
