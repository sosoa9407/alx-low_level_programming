#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1:pointer to stirng 1
 * @s2:pointer to string 2
 * @n: max size
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	string = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		string[i] = s2[j];
		i++
	}
	string[i] = '\0';
	return (string);
}
