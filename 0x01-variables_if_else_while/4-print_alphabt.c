#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all letters of the alphabet except e and q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			++c;
		putchar(c);
		++c;
	}
	putchar('\n');

	return (0);
}
