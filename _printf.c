#include "main.h"
/**
 * _printf - prints out a string
 * @format: the string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	char *first_a;
	int unsigned i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (first_a = format; *first_a != '\0'; first_a++)
	{
		while (*first_a != '%')
		{
			_putchar(*first_a);
			first_a++;
		}
		first_a++;
		switch(*first_a)
		{
			case 'c' : i = va_arg(arg,int);
				   _putchar(i);
				   break;
			case 's' : s = va_arg(arg,char *);
				   _puts(s);
				   break;
			case '%' : _putchar('%');
				   break;
		}
	}
	va_end(arg);
}


}
