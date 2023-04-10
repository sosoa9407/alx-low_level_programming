#include "main.h"

/**
 * _isalpha - check if char is a latter
 *
 * @c: takes input from other function
 *
 * Return: 1 if c is true ,0 other wise
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
