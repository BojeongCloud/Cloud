/*
 * Project_Euler_1.c
 *
 *  Created on: 2014. 2. 2.
 *      Author: manicarus
 */

#include <stdio.h>

int main(){
	int i;
	int result = 0;
	for(i = 1; i < 1000; i++) {
		if((i%3 == 0) || (i%5 == 0)) {
			result += i;
		}
	}
	printf("The result is: %d", result);
	return 0;
}
