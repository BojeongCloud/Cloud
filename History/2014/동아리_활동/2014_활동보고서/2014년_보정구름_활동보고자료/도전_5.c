#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void UsrShowChoice(int num)
{
     if(num == 1) 
         printf("당신은 바위 선택, ");
     else if(num == 2)
         printf("당신은 가위 선택, ");
     else
         printf("당신은 보 선택, ");
}

void ComShowChoice(int num)
{
     if(num == 1) 
         printf("컴퓨터는 바위 선택, ");
     else if(num == 2)
         printf("컴퓨터는 가위 선택, ");
     else
         printf("컴퓨터는 보 선택, ");
}

int ShowResult(int usrnum, int comnum)
{
     if(((usrnum - comnum) == (-1)) || ((usrnum - comnum) == (2)))
         return 2;
     else if((usrnum - comnum) == 0)
         return 1;
     else
         return 0;
}

int main()
{
    int num, countwin = 0, countdraw = 0;
    srand(time(NULL));

    for(;;)
    {
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &num); 
        
        UsrShowChoice(num);
        ComShowChoice((rand() % 3) + 1);
        ShowResult(num, (rand() % 3) + 1);

        if(ShowResult(num, (rand() % 3) + 1) == 2)
        {
            printf("당신이 이겼습니다!\n");
            countwin++;
        }
        else if(ShowResult(num, (rand() % 3) + 1) == 1)
        {
            printf("비겼습니다!\n");
            countdraw++;
        }
        else
        {
            printf("당신이 졌습니다!\n");             
            break;
        }
       
    }
    
    printf("게임결과 : %d승, %d무\n", countwin, countdraw);

    system("pause");
    return 0;
}
