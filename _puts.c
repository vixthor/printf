#include "main.h"
/**
 * _puts - prints out a string
 * @str: the string to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
