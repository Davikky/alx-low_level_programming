#include <stdio.h>
/**
* main - function in the main
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
		{
		int t1 = a / 10;
		int u1 = a % 10;

		for (b = a; b < 100; b++)
			{
			int t2 = b / 10;
			int u2 = b % 10;

			if (a < b)
				{
				putchar(t1 + '0');
				putchar(u1 + '0');
				putchar(' ');
				putchar(t2 + '0');
				putchar(u2 + '0');

				if (a != 98)
					{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
