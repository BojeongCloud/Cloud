#include <stdio.h>

int main()
{
    /* 코멘트 2016_01_06
    for문이 아니라 while문을 사용해서 다시 작성해주세요
    그리고 들여쓰기를 할 때, tab보다는 space키 4번을 사용해주세요
    */
    int a, b;
    for(a=2; a<10; a++)
    {
        for(b=1; b<10; b++)
        printf("%d x %d = %d \n", a, b, a*b);
        printf("\n");
    }
    return 0;
}
