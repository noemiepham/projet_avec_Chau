#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
char _putchar(char c)
{
    return (write(1, &c, 1));
}
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
    if (format[index] == '%' && format[index + 1] == '%')
    {
      _putchar('%');
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

/* 
int main(void)
{

    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a %% simple sentence.\n");
     printf("_________________________________________________\n");
    len2 = printf("Let's try to printf a %% simple sentence.\n");
     _printf("Character:[%c]\n", 'H');
    return (0);
}
 */