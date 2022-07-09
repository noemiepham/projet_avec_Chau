
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * _abs - print out the absolute value of number
 * @n: number
 * Return: int absolute value
 */

int _abs(int n)
{
        if (n < 0)
        {
                n = n * (-1);
                return (n);
        }
        else
                return (n);
}
char _putchar(char c)
{
    return (write(1, &c, 1));
}
int _printf(const char *format, ...)
{
  va_list list;
  int i;
       int count = 0; // nombre de chiffre
 /*  int count = 0; */
  int index = 0;
  va_start(list, format);
/*   while (format && format[count] != '\0')
  {
    count++;
  } */

  while (format && format[index] != '\0')
  {
    if (format[index] == '%' && format[index + 1] == 'i' || format[index + 1] == 'd')
    {
        int myNumber = va_arg(list, int);
        int toto = myNumber;
        if (toto < 0)
        {
          _putchar('-');
          toto = _abs(toto);
          continue;
        }
        
        do 
        {
          toto = toto / 10;
          ++count;
        } while (toto != 0);
        
        int *tab = malloc(count * sizeof(int));      
        int div = myNumber;
        int reste = 0;
        int p = 0;
        while (div > 0)
        {
          reste = div % 10;
          tab[p] = reste;
          div = div / 10;
          p++;
        }
        while (count > 0)
        {
          int tabCount = tab[--count];
          _putchar(tabCount + '0');
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


 int main(void)
{

    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("%d sentence.\n", -1234567);
       printf("_________________________________________________\n");
    len2 = printf("%d sentence.\n", -1234567);
    printf("_________________________________________________\n");
    
      
  _printf("String nnn : %d\n", -123);
    printf("String nnn : %d\n", -123) ;
    return (0);
}