#include <stdio.h>

/**
 * main - display all possible different combination of two digits
 *
 * Return: 0
*/
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
