#include "main.h"

/**
 * reverse_array - reverse the content of an array
 *
 * @a: array of integers
 * @n: the numbers of elements
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
