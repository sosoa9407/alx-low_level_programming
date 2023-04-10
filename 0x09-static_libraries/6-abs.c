#include "main.h"

/**
 * _abs - computes the apsolute value of an int
 *
 * @n: takes input for function
 *
 * Return: alwayes 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
