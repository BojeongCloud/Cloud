#include<stdio.h>
int main(void)
{
	int a;
	int i=1;
	printf("출력하고싶은 구구단은?");
	scanf("%d", &a);
	while(i<10)
	{
		printf("%d * %d = %d \n", a, i, a * i);
		i++;
	}
	return 0;
}
