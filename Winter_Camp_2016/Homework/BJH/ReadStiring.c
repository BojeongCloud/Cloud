#include <stdio.h>

int main()
{
	char str[50];
	int idx=0;
	
	printf("문자열 입력: ");
	scanf("%s", str);
	printf("\n입력받은 문자열: %s \n", str);
	
	printf("\n문자 단위 출력: ");
	while(str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
 } 
