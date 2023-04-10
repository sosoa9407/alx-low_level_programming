#include "main.h"

/**
 * *_memset - that fills memory with a constant byte.
 *
 * @s: pointer to put contest
 * @b: contest
 * @n: max bytes to use
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
