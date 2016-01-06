#include <stdio.h>

int main()
{
	int a, b;
	
	for(a=2; a<10; a++)
	{
		for(b=1; b<10; b++)
			printf("%d x %d = %d \n", a, b, a*b);
		printf("\n");
	}
	return 0;
}
