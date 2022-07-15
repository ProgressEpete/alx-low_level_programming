#include <stdio.h>
/**
 *  * main - Entry point
 *
 *    * Return: Always 0 (Success)
 **/

int main(void)
{
	char c;
	int i;
	double d;
	float f;

	printf("size of a char: %lu", (unsigned long)sizeof(c));
	printf("bytes(s)\n");
	printf("size of an int: %lu", (unsigned long)sizeof(i));
	printf("bytes(s)\n");
	printf("size of a long int: %lu", (unsigned long)sizeof(i));
	printf("bytes(s)\n");
	printf("size of a long long int: %lu", (unsigned long)sizeof(d));
	printf("bytes(s)\n");
	printf("size of a float: %lu", (unsigned long)sizeof(f));
	printf("bytes(s)\n");
	return (0);
}
