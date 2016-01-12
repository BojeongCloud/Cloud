#include <stdio.h>

int main()
{
    int a=2;
    int b=0;
	
	while(a<10)
	{
		b=1;
		while(b<10)
		{
			printf("%d x %d = %d \n", a, b, a*b);
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
}
