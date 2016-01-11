#include <stdio.h>

int main()
{
	char v[100];
	int a=0, i;
	char temp;
	
	printf("단어 입력: ");
	scanf("%s", v);
	
	while(v[a] != 0)
		a++;
		
	for(i=0; i<a/2; i++)
	{
		temp=v[i];
		v[i]=v[(a-i)-1];
		v[(a-i)-1]=temp;
	}
	printf("뒤집힌 단어: %s \n", v);
	return 0;
}
