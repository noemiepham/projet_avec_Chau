#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   /*  int len;
    int len2;
    int len3;
    int len4;
    unsigned int ui;
    long lint = 654, lintinf = 564;
    short hint = 654, hintinf = -564;
    unsigned short huinf = -564, hu = 654;
    unsigned long luinf = -564, lu = 654;
    void *addr;
 */

_printf("String:[%s][%s]\n", "I am a string !", "n");
    printf("String:[%s][%s]\n", "I am a string !", "n");


  _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
/*     _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr); */
	_printf("Percent:[%%]\n");
 	printf("Percent:[%%]\n");
     _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

   /*  len = _printf("Let's try to printf a simple sentence hhh.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len2, len2);
    len3 = _printf("MAX MIN:[%d, %i]\n", INT_MIN, INT_MAX);
    len4 = printf("MAX MIN:[%d, %i]\n", INT_MIN, INT_MAX);
    _printf("Length:[%d, %i]\n", len3, len3);
    printf("Length:[%d, %i]\n", len4, len4);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    len = _printf("Unsigned:[%u]\n", UINT_MAX);
    len2 = printf("Unsigned:[%u]\n", UINT_MAX);
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
	_printf("Percent:[%%]\n");
 	printf("Percent:[%%]\n");
    _printf("Unknown:[%r]\n");
	_printf("%b\n", 4294967295);
    _printf("%v\n");
    _printf("%");
	_printf("Octal:[%o]\n", 5648975);
	printf("Octal:[%o]\n", 5648975);
	_printf("%r\n", "Hello");
    _printf("%R\n", "Bonjour, je suis michel");

        _printf("\n_____Simple print_____\n");
    len3 = _printf("Short:[%hd] [%hi]\n", hint, hint);
    len4 = printf("Short:[%hd] [%hi]\n", hint, hint);
    _printf("Short inf:[%hd] [%hi]\n", hintinf, hintinf);
    printf("Short inf:[%hd] [%hi]\n", hintinf, hintinf);
    _printf("Short MAX MIN:[%hd] [%hi]\n", SHRT_MAX, SHRT_MIN);
    printf("Short MAX MIN:[%hd] [%hi]\n", SHRT_MAX, SHRT_MIN);
    _printf("hu: [%d]\n", len3);
    printf("hu: [%d]\n", len4);

        len3 = _printf("long:[%ld] [%li]\n", lint, lint);
    len4 = printf("long:[%ld] [%li]\n", lint, lint);
    _printf("Long inf:[%ld] [%li]\n", lintinf, lintinf);
    printf("Long inf:[%ld] [%li]\n", lintinf, lintinf);
    _printf("Long MAX:[%ld] [%li]\n", LONG_MAX, LONG_MIN);
    printf("Long MAX:[%ld] [%li]\n", LONG_MAX, LONG_MIN);
    _printf("length lu: [%d]\n", len3);
    printf("length lu: [%d]\n", len4);

    _printf("\n_____UNSIGNED_____\n");
    len3 = _printf("Short:[%hu]\n", hu);
    len4 = printf("Short:[%hu]\n", hu);
    _printf("Short inf:[%hu]\n", huinf);
    printf("Short inf:[%hu]\n", huinf);
    _printf("Short MAX:[%hu]\n", USHRT_MAX);
    printf("Short MAX:[%hu]\n", USHRT_MAX);
    _printf("length hu: [%d]\n", len3);
    printf("length hu: [%d]\n", len4);

    len3 = _printf("long:[%lu]\n", lu);
    len4 = printf("long:[%lu]\n", lu);
    _printf("Long inf:[%lu]\n", luinf);
    printf("Long inf:[%lu]\n", luinf);
    _printf("Long MAX:[%lu]\n", ULONG_MAX);
    printf("Long MAX:[%lu]\n", ULONG_MAX);
    _printf("length lu: [%d]\n", len3);
    printf("length lu: [%d]\n", len4);

        _printf("\n_____Octal_____\n");
    len3 = _printf("Short:[%ho]\n", hu);
    len4 = printf("Short:[%ho]\n", hu);
    _printf("Short inf:[%ho]\n", huinf);
    printf("Short inf:[%ho]\n", huinf);
    _printf("Short MAX:[%ho]\n", USHRT_MAX);
    printf("Short MAX:[%ho]\n", USHRT_MAX);
    _printf("hu: [%d]\n", len3);
    printf("hu: [%d]\n", len4);

        len3 = _printf("long:[%lo]\n", lu);
    len4 = printf("long:[%lo]\n", lu);
    _printf("Long inf:[%lo]\n", luinf);
    printf("Long inf:[%lo]\n", luinf);
    _printf("Long MAX:[%lo]\n", ULONG_MAX);
    printf("Long MAX:[%lo]\n", ULONG_MAX);
    _printf("length lu: [%d]\n", len3);
    printf("length lu: [%d]\n", len4);

            _printf("\n_____Hexadecimal lower_____\n");
    len3 = _printf("Short:[%hx]\n", hu);
    len4 = printf("Short:[%hx]\n", hu);
    _printf("Short inf:[%hx]\n", huinf);
    printf("Short inf:[%hx]\n", huinf);
    _printf("Short MAX:[%hx]\n", USHRT_MAX);
    printf("Short MAX:[%hx]\n", USHRT_MAX);
    _printf("hu: [%d]\n", len3);
    printf("hu: [%d]\n", len4);

        len3 = _printf("long:[%lx]\n", lu);
    len4 = printf("long:[%lx]\n", lu);
    _printf("Long inf:[%lx]\n", luinf);
    printf("Long inf:[%lx]\n", luinf);
    _printf("Long MAX:[%lx]\n", ULONG_MAX);
    printf("Long MAX:[%lx]\n", ULONG_MAX);
    _printf("length lu: [%d]\n", len3);
    printf("length lu: [%d]\n", len4);

        _printf("\n_____Hexadecimal upper_____\n");
    len3 = _printf("Short:[%hX]\n", hu);
    len4 = printf("Short:[%hX]\n", hu);
    _printf("Short inf:[%hX]\n", huinf);
    printf("Short inf:[%hX]\n", huinf);
    _printf("Short MAX:[%hX]\n", USHRT_MAX);
    printf("Short MAX:[%hX]\n", USHRT_MAX);
    _printf("hu: [%d]\n", len3);
    printf("hu: [%d]\n", len4);

        len3 = _printf("long:[%lX]\n", lu);
    len4 = printf("long:[%lX]\n", lu);
    _printf("Long inf:[%lX]\n", luinf);
    printf("Long inf:[%lX]\n", luinf);
    _printf("Long MAX:[%lX]\n", ULONG_MAX);
    printf("Long MAX:[%lX]\n", ULONG_MAX);
    _printf("length lu: [%d]\n", len3);
    printf("length lu: [%d]\n", len4);

    _printf("%lv\n"); */

    return (0);
}
