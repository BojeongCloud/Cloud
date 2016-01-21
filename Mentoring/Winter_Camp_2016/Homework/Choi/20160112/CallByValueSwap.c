// CallByValueSwap
#include <stdio.h>

/* Comment
 * 앞으로는 각 파일을 따로 제출하시기 바랍니다. 
 * CallByValue.c 파일과 CallByRef.c 파일을 따로 만들었습니다.
 * 앞으로는 주의해주시기 바랍니다.*/

Swap(int n1, int n2)
{
  int temp=n1;
  n1=n2;
  n2=temp;
  printf("n1 n2:%d %d \n", n1, n2);
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