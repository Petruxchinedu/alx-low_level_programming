#include <stdio.h>
/**
* main - entry point
*
* Return: 0 after running function
*/

int main(void)
{
	char c;
	int i;
	long ii;
	long long iii;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(ii));
	printf("Size of a lon long int: %d byte(s)\n", sizeof(iii));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
