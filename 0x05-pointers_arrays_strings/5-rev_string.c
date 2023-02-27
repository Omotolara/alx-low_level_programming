#include "main.h"

/**
  * rev_string - reverses a string
  * @s: the string
  *
  * Return: nothing
  */
void rev_string(char *s)
{
	int len = _strlen(s);
	char temp;
	int i;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
