#include <stdio.h>

void CopyArr(int (*original)[4],int (*copy)[4], int nrow)//4x4 배열을 복사해주는 함수이다
{
	int i, j;
	for(i = 0; i < nrow; i++)
		for(j = 0; j < 4; j++)
			copy[i][j] = original[i][j];
}

void Shambles(int (*ptr)[4], int nrow)//시계방향으로 숫자들을 돌려주는 함수
{
	int ptr2[4][4];
	int i, j;

	CopyArr(ptr, ptr2, nrow);

	for(i = 0; i < nrow; i++)
		for(j = 0; j < 4; j++)
			ptr[j][i + (-2*i + 3)] = ptr2[i][j];
}

void PrintArray(int (*arr)[4], int nrow)//배열을 출력하는 함수
{
	int i, j;

	for(i = 0; i < nrow; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int mat[4][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int k;

	PrintArray(mat, sizeof(mat)/sizeof(mat[0]));

	for(k = 0; k < 3; k++){
		Shambles(mat, sizeof(mat)/sizeof(mat[0]));
		PrintArray(mat, sizeof(mat)/sizeof(mat[0]));
	}//변환과 출력을 3번한다.


	return 0;
}