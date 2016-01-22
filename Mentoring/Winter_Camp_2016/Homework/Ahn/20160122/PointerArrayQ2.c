#include <stdio.h>

int main(void)
{
    int arr[5]={1, 2, 3, 4, 5};
    int * ptr=&arr[5];
    int total=0, a;
    for(a=0; a<5; a++)
    	total += *ptr;
    printf("%d", total);
    return 0;
}
