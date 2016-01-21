#include <stdio.h>

Swap3(int ptr1, int ptr2, int ptr3)
{
  int temp = ptr3;
  ptr3 = ptr2;
  ptr2 = ptr1;
  ptr1 = temp;
}

int main()
{
  int num1, int num2, int num3;
  Swap3(&num1, &num2, &num3);
  printf("%d %d %d \n", num1, num2, num3);
  return 0;
}
  
