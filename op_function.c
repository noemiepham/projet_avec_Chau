#include "main.h"

#include <stdarg.h>
/**
 * _putchar
 */
char _putchar(char c)
{

  return (write(1, &c, 1));
}

/**
 * print_string - print char
 *
 *
 */

int _printf(const char *format, ...)
{
  va_list list;
  int count = 0;
  int index = 0;
  va_start(list, format);
  while (format && format[count] != '\0')
  {
    count++;
  }

  while (format && format[index] != '\0')
  {
    if (format[index] == '%' && format[index + 1] == 'c')
    {
      _putchar(va_arg(list, int));
      index++;
    }
    else
    {

      _putchar(format[index]);
    }
    index++;
  }
  va_end(list);
}

/**
 *
 */

#include <stdarg.h>

char _putchar(char c)
{
  return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
  va_list list;
  int count = 0;
  int index = 0;
  char *array;

  va_start(list, format);
  array = va_arg(list, char *);
  while (format && format[count] != '\0')
  {
    count++;
  }

  while (format && format[index] != '\0')
  {
    if (format[index] == '%' && format[index + 1] == 's')
    {
      for (int j = 0; array[j]; j++)
      {
        _putchar(array[j]);
      }
    }
    else
    {

      _putchar(format[index + 1]);
    }
    index++;
  }
  va_end(list);
}

int main(void)
{
  _printf("String:[%s]\n", "I am a string !");
  return (0);
}