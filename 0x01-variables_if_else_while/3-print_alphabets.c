#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -> Write a program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 *Return: 0
 **/

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
	putchar(ch);
	}
	putchar(10); /*this is an ASCII code for newline*/
	return (0);
}
