#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("\n");
	printf("┌----------글자색 설명------------┐\n");
	printf("│                                 │\n");
	printf("│   ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf("노란색");
	printf(" : 문법적으로 중요      ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("│\n");
	printf("│                                 │\n");
	printf("│   ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11);
	printf("연한 파란색");
	printf(" : 단어 뜻 설명    ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("│\n");
	printf("│                                 │\n");
	printf("│   ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13);
	printf("핑크색");
	printf(" : 부가설명 부분        ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("│\n");
	printf("│                                 │\n");
	printf("│   ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 12);
	printf("빨간색");
	printf(" : 중요한 부분          ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("│\n");
	printf("│                                 │\n");
	printf("│   ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 10);
	printf("초록색");
	printf(" : 글의 순서            ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("│\n"); 
	printf("│                                 │\n");
	printf("└---------------------------------┘\n\n");
	
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	getch();
	printf("〔 주제 : 뉴스거리가 되는 것 〕 \n\n");
	getch();
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("기자들이 분쟁에 대해 이야기하는 것 선호\n");
	getch();
	printf("                   l\n");
	printf("                   V \n");
	printf("뉴스 보도에 자연스러운 자료 제공\n");
	printf("자료예시 : 시위, 폭력, 범죄, 전쟁, 재난\n");
	getch();
	printf("                   l\n");
	printf("                   V \n");	
	printf("종군 기자 : 직업적 성취\n"); 
	printf("평화 기자 : 모순적 성격\n");
	getch();
	printf("                   l\n");
	printf("                   V \n"); 
	printf("'평화<-->뉴스' 연관성 이해 : 중요한 출발점\n\n\n\n"); 

	getch();
	printf("{All other things");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13);
	printf(" being ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("equal}, journalists prefer to tell stories about conflict.\n\n\n\n");
	getch();

	printf("News is");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11);
	printf(" first and foremost ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("about conflict and disorder.\n\n\n\n");
	getch();
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 10);
	printf("[순서](A) ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("Protests, violence, crime, wars, and disasters");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf(" provide ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("the most natural material");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf(" for ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("news reports.\n\n\n\n");
	getch();

	printf("Journalists become famous and win awards for covering such stories.\n\n\n\n");
	getch();
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 10);
	printf("[순서](B) ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13);
	printf("Many reporters dream of becoming war");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11);
	printf(" correspondents");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13);
	printf(", for this");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf(" is considered ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 13);
	printf("the height of professional accomplishment.\n\n\n\n");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	getch();
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf("The very ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("idea of a “peace correspondent,” ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 12);
	printf("on the other hand");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf(", sounds strange, even");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11);
	printf(" contradictory");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf(".\n\n\n\n");
	getch();
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 10);
	printf("[순서](C) ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("When peace appears to be taking hold in a particular area, it is time");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf(" for ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11);
	printf("journalists");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf(" to leave.\n\n\n\n");
	getch();
	
	printf("Understanding {that peace and news make strange bedfellows}");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14);
	printf(" is ");
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
	printf("an important starting point for all that follows.\n\n\n\n");
	getch();
	
}
