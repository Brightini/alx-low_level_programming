#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: pointer to string whose substring is to be gotten
 * @accept: pointer to string to get
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (count);
	}
	return (0);
}
