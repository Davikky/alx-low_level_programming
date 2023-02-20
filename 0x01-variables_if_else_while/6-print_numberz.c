#include <stdio.h>
/**
* main - Prints numbers in base 10
*
* This program prints digits 0-9
*
* Return: Always returns 0
*/
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
