#include <stdio.h>

void Swap3(int * ptr1, int * ptr2, int * ptr3)
{
	int temp = *ptr3;
	*ptr1 = temp;
	*ptr2 = *ptr1;
	*ptr3 = *ptr2;
}

int main(void)
{
	int num1=1, num2=5, num3=23;
	Swap3(&num1, &num2, &num3);
	printf("%d, %d, %d", num1, num2, num3);
}
