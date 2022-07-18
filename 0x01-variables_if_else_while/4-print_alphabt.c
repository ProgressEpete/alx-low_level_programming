#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -> Write a program that prints the alphabet in lowercase
 * followed by a new line
 *Return: 0
 **/
int main(void)
{
	char ch;

for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
	putchar(10); /*this is an ASCII code for newline*/
	return (0);
}
