#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 3 digits.
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;


	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y && y < z)
				{
					putchar(x % 10 + '0');
					putchar(y % 10 + '0');
					putchar(z % 10 + '0');
					if (x < 7)
					{
						putchar(44);
						putchar(32);
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}


