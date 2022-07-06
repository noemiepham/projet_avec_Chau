#include <main.h>
/**
*get_op_func - function get option
*@s : number
*Return: a pointer to the function op_add
*/

int (*get_op_func(char *s))
{
	op_t ops[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", modulo}
	{NULL, NULL}
};
