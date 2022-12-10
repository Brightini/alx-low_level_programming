#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Description: It only uses the putchar function.
 * Note that in order to print a newline using the
 * putchar function, single quotes are used.
 * Single quotes indicate that a charater is to be printed.
 * Double quotes indicate that a string literal is to be printed.
 * Putchar does not print string literals
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
