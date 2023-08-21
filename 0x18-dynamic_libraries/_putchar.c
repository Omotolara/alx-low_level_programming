#include "main.h"

/**
 * _putchar: prints char
 * @c: character
 * Return: the char 
 */
int _putchar(char c) {
	return write(1, &c, 1);
}
