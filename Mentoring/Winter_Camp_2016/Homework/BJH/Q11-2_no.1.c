#include <stdio.h>

int main()
{
	char v[100];
	int a=0;
	
	printf("단어를 입력하세요: ");
	scanf("%s", v);
	
	while(v[a] != '\0')
		a++;
	
	printf("단어의 길이: %d \n", a);
	return 0;
}
