/*
 * PointerArrayCombination.c
 *
 *  Created on: 2016. 1. 13.
 *      Author: น่ม๖ศฦ
 */


#include <stdio.h>

int main()
{
	int arr[5]={1, 2, 3, 4, 5};
	int * ptr=&arr[4];
	int total=0,i;

	for(i=0; i<5; i++)
		total += *(ptr--);

	printf("%d", total);
	return 0;
}
