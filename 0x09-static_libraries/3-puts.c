#include "main.h"

/**
  * _puts - prints a string,followed by a newline, to stdout
  * @str: the string
  *
  * Return: void
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
