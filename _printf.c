int _printf(const char *format, ...)
{
	int i;
	
	va_list list;

	va_start(list, format)

	for (i = 0, format[i], i++)
	{
		c => print_char(va_arg(list, char));
		s => print_string(va_arg(list, char*));
		% => print_modulo(
	}
	va_end(list);
}
