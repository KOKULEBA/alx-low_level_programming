#include <stdio.h>

/**
 * Main - print alphabet in lower case, then in upper case
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char apha;
	for (alpha = 'a'; alpha<= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha<= 'Z'; aplha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

