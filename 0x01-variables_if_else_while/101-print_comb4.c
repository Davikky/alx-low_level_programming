#include <stdio.h>
/**
* main - function in the main
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 0; a < 1000; a++)
		{
		int h = a / 100;
		int t = (a / 10) % 10;
		int u = a % 10;

		if (h != u && h != t && t != u && h < t && t < u)
			{
			putchar(h + '0');
			putchar(t + '0');
			putchar(u + '0');

			if (a != 789)
				{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
