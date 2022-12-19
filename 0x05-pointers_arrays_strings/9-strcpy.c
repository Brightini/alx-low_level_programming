#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;
	++i;
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[i];
		--i;
	}
	return (dest);
}
