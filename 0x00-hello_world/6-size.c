#include <stdio.h>
/**
 * main - prints size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int w;
	float v;

	printf("Size of a char: %lu byte(s)\n", sizeof(x));
	printf("Size of an int: %lu byte(s)\n", sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(w));
	printf("Size of a float: %lu byte(s)\n", sizeof(v));
	return (0);
}
