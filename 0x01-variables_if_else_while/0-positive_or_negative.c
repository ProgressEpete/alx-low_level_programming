#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
 /* betty style doc for function main goes there */ 
/**
 * main - Entry point
 * return: Always return 0 (success)
 */

int main(void) 
{ 
	int n; 
		    
	srand(time(0)); 
	n = rand() - RAND_MAX / 2;
if (n > 0)
	{
	printf("is positive");
	}
if (n == 0)
	{
	printf("is zero");
	}
if (n < 0)
	{
	printf("is negative\n");
	}
	/* your code goes there */ 
	return (0); 
}
