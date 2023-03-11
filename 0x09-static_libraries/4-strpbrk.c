#include "main.h"

/**
  * _strpbrk - searches a string for any set of bytes
  * @s: the string
  * @accept: the accepted characters
  *
  * Return: bytes in string that matches the bytes in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
