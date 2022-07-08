#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
char _putchar(char c)
{
  return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
  va_list list;
 /*  int count = 0; */
  int index = 0;
  char *array;

  va_start(list, format);
  array = va_arg(list, char *);
 /*  while (format && format[count] != '\0')
  {
    count++;
  }
 */
  if (array == NULL)
  {
    array = "(NULL)";
  }

  while (format && format[index] != '\0')
  {
    if (format[index] == '%' && format[index + 1] == 's')
    {
      for (int j = 0; array[j]; j++)
      {
        _putchar(array[j]);
      }
      index++;
    }
    else
    {
      _putchar(format[index]);
    }
    index++;
  }
  va_end(list);
  return (1);
}

int main()
{

  _printf("String:[%s]\n", "I am a ttring !");
  printf("_________________________________________________\n");
  printf("String:[%s]\n", "I am a string !");
  printf("_________________________________________________\n");
  _printf("String:[%s]\n", NULL);
  printf("_________________________________________________\n");
  _printf("String:[%s]\n", NULL);
 /** _printf("String:[%s][%s]\n", "I am a string !", "hello");
  printf("_________________________________________________\n");
  printf("String:[%s][%s]\n", "I am a string !", "hello");
  */
      return (0);
}