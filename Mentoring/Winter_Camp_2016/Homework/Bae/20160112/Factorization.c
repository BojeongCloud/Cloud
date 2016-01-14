/*
 * Factorization.c
 *
 *  Created on: 2016. 1. 14.
 *      Author: πË¡ˆ»∆
 */


#include <stdio.h>
#define NUM 8

/* ¿ß NUM¿« ∞™¿ª πŸ≤„¡÷∏È πŸ≤„ ¡ÿ ∞™ø° ¥Î«— º“¿Œºˆ∫–«ÿ∏¶ «“ ºˆ ¿÷¥Ÿ. */
/* From now on, please refrain yourself from typing Korean. Characters are not showing well. */

int factorization(int number, int * factors);

int main() {
  int factors[100];
  int count;
  int i;

  count = factorization(NUM, factors);

  printf("%d¿« º“¿Œºˆ¿« ∞≥ºˆ¥¬ %d∞≥\n", NUM, count);
  printf("%d¿« º“¿Œºˆ¥¬ ", NUM);

  for(i = 0; i < NUM; i++);
  {
       printf("%d ", NUM); 
       /* 여기에 NUM이 들어가야 하는 것은 아닌데... 
        * 각 소인수가 들어가야 하는거니까 
        * factors 배열의 element가 출력되어야 하지 않을까? */
  }

  printf("\n");

  return 0;
}

int factorization(int number, int * factors) {
  /* insert your code */

  int i;
  for(i = 0; i < number; i++) {
    if(number % (i + 1) == 0) { // remainder is zero
      /* insert your code */
    } else {                    // remainder is not zero
      /* insert your code */
    }
  }

  return 0;
}
