/*
 * 도전_2.c
 *
 *  Created on: 2014. 2. 2.
 *      Author: manicarus
 */

#include <stdio.h>
#define ARRLEN 5
#define UP 0
#define DOWN 1
#define RIGHT 2
#define LEFT 3

int count = 1;

void horizontal(int start_x, int start_y, int direction, int (*arr)[ARRLEN]);
void vertical(int start_x, int start_y, int direction, int (*arr)[ARRLEN]);

int main() {
	int i, j;
	int arr[ARRLEN][ARRLEN];

	// Initializing the array.
	for(i = 0; i < ARRLEN; i++) {
		for(j = 0; j < ARRLEN; j++) {
			arr[i][j] = 0;
		}
	}

	horizontal(0, 0, RIGHT, arr);

	// Printing out the array.
	for(i = 0; i < ARRLEN; i++) {
		for(j = 0; j < ARRLEN; j++) {
			printf("%d\t", arr[i][j]);;
		}
		printf("\n");
	}
}

void horizontal(int start_x, int start_y, int direction, int (*arr)[ARRLEN]) {
	// The value of y coordinate does not change
	int i;
	if(direction == RIGHT) {
		for(i = start_x; (arr[start_y][i] == 0) && (i < ARRLEN); i++) {
			arr[start_y][i] = count++;
		}
		// If count is bigger than the number of the array element, the function is terminated.
		if(count > ARRLEN*ARRLEN) {
			return;
		} else {
			// At the end of the for loop, i++ is executed.
			vertical(i - 1, start_y + 1, DOWN, arr);
		}
	} else if(direction == LEFT) {
		for(i = start_x; (arr[start_y][i] == 0) && (i >= 0); i--) {
			arr[start_y][i] = count++;
		}
		// If count is bigger than the number of the array element, the function is terminated.
		if(count > ARRLEN*ARRLEN) {
			return;
		} else {
			vertical(i + 1, start_y - 1, UP, arr);
		}
	}
}

void vertical(int start_x, int start_y, int direction, int (*arr)[ARRLEN]) {
	// The value of x coordinate does not change
	int i;
	if(direction == UP) {
		for(i = start_y; (arr[i][start_x] == 0) && (i >= 0); i--) {
			arr[i][start_x] = count++;
		}
		// If count is bigger than the number of the array element, the function is terminated.
		if(count > ARRLEN*ARRLEN) {
			return;
		} else {
			horizontal(start_x + 1, i + 1, RIGHT, arr);
		}
	} else if(direction == DOWN) {
		for(i = start_y; (arr[i][start_x] == 0) && (i < ARRLEN); i++) {
			arr[i][start_x] = count++;
		}
		// If count is bigger than the number of the array element, the function is terminated.
		if(count > ARRLEN*ARRLEN) {
			return;
		} else {
			horizontal(start_x - 1, i - 1, LEFT, arr);
		}
	}
}
