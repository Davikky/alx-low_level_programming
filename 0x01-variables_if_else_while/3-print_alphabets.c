#include <stdio.h>
/**
* main - function in the main
*
* This function prints out list of alphabets
* in lowercase and then in uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	char C;

	for (c = 'a'; c <= 'z'; c++)
		{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
		{
		putchar(C);
	}
	putchar('\n');

	return (0);
}
