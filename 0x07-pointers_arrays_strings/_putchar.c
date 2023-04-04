#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 *
 * @c: the character
 *
 * Return: Sucsess 1,error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
