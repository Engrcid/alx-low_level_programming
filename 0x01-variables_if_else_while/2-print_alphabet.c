#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar("\n")
	return (0);
}
