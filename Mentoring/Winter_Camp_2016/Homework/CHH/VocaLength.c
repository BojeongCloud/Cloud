#include <stdio.h>

int main()
{
	char voca[100];
	int len=0;

	scanf(“%s”, voca);

	while(voca[len] != ‘\0’)
		len++;

	printf(“%d \n”, len);
	return 0;
}
