#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -> Write a program that prints all possible
 * combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int ch;
	int n;

for (ch = 48; ch <= 57; ch++)
{
for (n = 48; n <= 57; n++)
{
	putchar(ch);
	putchar(n);
if (ch != 57 || n != 57)
	{
	putchar(44);
	putchar(32);
	}
}
}
	return (0);
}
