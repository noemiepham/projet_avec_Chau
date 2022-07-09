#include <unistd.h>
#include "main.h"
/**
* _putchar - print character
* @c : character
* Return: write
*/
char _putchar(char c)
{
	return (write(1, &c, 1));
}
