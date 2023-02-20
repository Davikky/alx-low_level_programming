#include <stdio.h>
/**
* main - function in the main
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
		{
		int t = a / 10;
		int u = a % 10;

		if (t != u && t < u)
			{
			putchar(t + '0');
			putchar(u + '0');
			if (a != 89)
				{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
