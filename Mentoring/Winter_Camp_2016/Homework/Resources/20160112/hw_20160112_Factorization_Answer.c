#include <stdio.h>
#define NUM 256

/* 위 NUM의 값을 바꿔주면 바꿔 준 값에 대한 소인수분해를 할 수 있다. */

int factorization(int number, int * factors);

int main() {
  int factors[100];
  int count;
  int i;
  
  count = factorization(NUM, factors);
  
  printf("%d의 소인수의 개수는 %d개\n", NUM, count);
  printf("%d의 소인수는 ", NUM);
  
  for(i = 0; i < count; i++) {
    printf("%d ", factors[i]); // 각 소인수들을 출력하도록 한다.
  }
  
  printf("\n");
  
  return 0;
}

int factorization(int number, int * factors) {
  int count = 0;
  int i;

  for(i = 1; i <= number; i++) {
    if(number % i == 0) { // remainder is zero
        factors[count++] = i;
    } else {              // remainder is not zero
        continue;
    }
  }
  
  return count;
}
