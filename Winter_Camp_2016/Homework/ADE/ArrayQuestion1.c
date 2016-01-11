#include<stdio.h>

int main(void)
{
	//int a;
	//char arr[a];
	// 배열의 길이를 정할 때는 다음과 같이 항상 상수값을 넣어주어야 합니다.
	char arr[50];
	int b=0;
	printf("Type a word: ");
	scanf(" %s", arr);
	
	while(arr[b] != 0)
		b++;
	// printf 부분에서 오류가 났었는데, 함수 이름을 pirntf라고 해서 오류가 났었습니다.
	printf("The length of the word is: %d \n", b);
	return 0; 
}
