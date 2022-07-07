#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    long l;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent symbol: [%%]\n");
    len2 = printf("Percent symbol: [%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    /* printf("Unknown:[%r]\n"); */

    /* Tests with multiple formats */
    len = _printf("The sum of %d and %i is %s \n", 3, -4, "seven");
    len2 = printf("The sum of %d and %i is %s \n", 3, -4, "seven");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d", 1024);
    len2 = printf("%d", 1024);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d\n", -1024);
    len2 = printf("%d\n", -1024);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d\n", INT_MAX);
    len2 = printf("%d\n", INT_MAX);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%i\n", INT_MAX);
    len2 = printf("%i\n", INT_MAX);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    l = (long)INT_MAX + 1024;
    len = _printf("%d\n", l);
    _printf("Len:[%d]\n", len);

	len = _printf("%");
    _printf("Len:[%d]\n", len);
    return (0);
}
