#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seed, i;

    printf("Type a number for a seed: ");
    scanf("%d", &seed);
    srand(seed);
    
    for(i = 0; i < 5; i++)
    {
         printf("%d\n", rand() % 100);
    }

    system("pause");
    return 0;
}
