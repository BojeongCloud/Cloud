/*
 * CallByValueSwap.c
 *
 *  Created on: 2016. 1. 12.
 *      Author: user
 */


#include <stdio.h>

void Swap(int n1, int n2)
{
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("n1 n2: %d %d \n", n1, n2);
}

int main()
{
	int num1=10;
	int num2=20;
	printf("num1 num2: %d %d \n", num1, num2);

	Swap(num1, num2);
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}
