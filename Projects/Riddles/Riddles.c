#include <stdio.h>
int main()
{
	int opt, num, no, a, b, c, d, e, f, g, h;
	printf("┌───────────────────────────────┐\n");
	printf("│                                                              │\n");
	printf("│                                                              │\n");
	printf("│                   Cloud    Quiz    Program                   │\n");
	printf("│                                                              │\n");
	printf("│                                                              │\n");
	printf("└───────────────────────────────┘\n");
			
	printf("난이도를 설정해주세요 \n");
	printf("쉬움 : 1 , 중간 : 2 , 어려움 : 3 \n");
	printf("------------>");
	scanf("%d", &opt);
	
	if(opt==1)
	{
		printf("난이도를 '쉬움' 으로 설정하셨습니다. \n\n\n\n\n");
		printf("할아버지와 손자가 길을 걷다가 산불을 보고 손자가 할아버지에게 한 말은? \n");
		printf("\n");
		printf("1. 할아버지 가을이네요! \n");
		printf("2. 산타할아버지 \n");
		printf("3.캠프파이어다!!!\n");
		printf("4. 물 어딨지? \n");
		printf("답은? ");
		scanf("%d", &num);
		if(num==2)
		{
			printf("정답입니다! \n\n\n\n\n");
			printf("다음 문제입니다. \n");
			printf("세상에서 제일 뚱뚱한 사람들이 사는 동네는?\n");
			printf("1. 미국 롯데리아 \n");
			printf("2. 안흥찐빵마을 \n");
			printf("3. 서울특별시 강남구 개포동 \n");
			printf("4. 경기도 시흥시 포동 \n");
			printf("답은? ");
			scanf("%d", &no);
			if(no==3)
			{
				printf("정답입니다! \n\n\n\n\n");
				printf("다음 문제입니다. \n");
				printf("수박 한통에 5000원이다. 그럼 수박 두통엔? \n");
				printf("1. 10000원 \n");
				printf("2. 타이레놀 \n");
				printf("3. 씨없는수박 \n");
				printf("4. 노란수박 \n");
				printf("답은? ");
				scanf("%d", &a);
				if(a==2)
				{
					printf("정답입니다! \n\n\n\n\n");
					printf("다음 문제입니다. \n");
					printf("원숭이를 화로에 넣었다 빼면 어떻게 될까요? \n");
					printf("1. 원숭이 바비큐 \n");
					printf("2. 훈제원숭이 \n");
					printf("3. 구운몽 \n");
					printf("4. MC몽 \n");
					printf("답은? ");
					scanf("%d", &b);
					if(b==3)
					{
						printf("정답입니다! \n\n\n\n\n");
						printf("다음 문제입니다. \n");
						printf("걸을 때마다 검은 가루를 흘리며 가는 것은? \n");
						printf("1. 박명수 \n");
						printf("2. 지우개 \n");
						printf("3. 연필 \n");
						printf("4. 후추통 \n");
						printf("답은? ");
						scanf("%d", &c);
						if(c==4)
						{
							printf("정답입니다! \n\n\n\n\n");
							printf("다음 문제입니다. \n");
							printf("짧은 개가 사는 집은? \n");
							printf("1. 연립주택 \n");
							printf("2. 개집 \n");
							printf("3. 단독주택 \n");
							printf("4. 아파트 \n");
							printf("답은? ");
							scanf("%d", &d);
							if(d==3)
							{
								printf("정답입니다! \n\n\n\n\n");
								printf("다음 문제입니다. \n");
								printf("손바닥으로 움켜쥐면 한 웅큼이요, 두 팔로 껴안으면 한 아름 되는 것은 \n");
								printf("1. 재떨이 \n");
								printf("2. 맷돌 \n");
								printf("3. 솥뚜껑 \n");
								printf("4. 방석 \n");
								printf("답은? ");
								scanf("%d", &e);
								if(e==3)
								{
									printf("정답입니다! \n\n\n\n\n");
									printf("다음 문제입니다. \n");
									printf("1년에 일곱 달은 31일 , 네 달은 30일이 있습니다. 그렇다면 28일 은 몇 번 있을까요 \n");
									printf("1. 1번 \n");
									printf("2. 4년에 1번\n");
									printf("3. 없다 \n");
									printf("4. 1년에 12번 \n");
									printf("답은? ");
									scanf("%d", &f);
									if(f==4)
									{
										printf("정답입니다! \n\n\n\n\n");
										printf("다음 문제입니다. \n");
										printf("깨뜨리고 칭찬 받는 것은? \n");
										printf("1. 접시 \n");
										printf("2. 유리잔 \n");
										printf("3. 신기록 \n");
										printf("4. 액자 \n");
										printf("답은? ");
										scanf("%d", &g);
										if(g==3)
										{
											printf("정답입니다! \n\n\n\n\n");
											printf("다음 문제입니다. \n");
											printf("사과 반쪽과 닮은것은??\n");
											printf("1. 남은 사과 반쪽 \n");
											printf("2. 얼굴 \n");
											printf("3. 수박 \n");
											printf("4. 참외 \n");
											printf("답은? ");
											scanf("%d", &h);
											if(h==1)
												printf("정답입니다! \n");
											else if(h==2)
												printf("오답입니다. \n");
											else if(h==3)
												printf("오답입니다. \n");
											else
												printf("오답입니다. \n");
										}
										else if(g==2)
											printf("오답입니다. \n");
										else if(g==1)
											printf("오답입니다. \n");
										else
											printf("오답입니다. \n");
									}
									else if(f==2)
										printf("오답입니다. \n");
									else if(f==3)
										printf("오답입니다. \n");
									else
										printf("오답입니다. \n");	
								}
								else if(e==2)
									printf("오답입니다. \n");
								else if(e==1)
									printf("오답입니다. \n");
								else
									printf("오답입니다. \n");	
							}
							else if(d==2)
								printf("오답입니다. \n");
							else if(d==1)
								printf("오답입니다. \n");
							else
								printf("오답입니다. \n");	
						}
						else if(c==2)
							printf("오답입니다. \n");
						else if(c==3)
							printf("오답입니다. \n");
						else
							printf("오답입니다. \n");	
					}
					else if(b==2)
						printf("오답입니다. \n");
					else if(b==1)
						printf("오답입니다. \n");
					else
						printf("오답입니다. \n");
				}
				else if(a==1)
					printf("오답입니다. \n");
				else if(a==3)
					printf("오답입니다. \n");
				else
					printf("오답입니다. \n");	
			}
			else if(no==2)
				printf("오답입니다. \n");
			else if(no==1)
				printf("오답입니다. \n");
			else
				printf("오답입니다. \n");	
		}
		else if(num==1)
			printf("오답입니다. \n");
		else if(num==3)
			printf("오답입니다. \n");
		else
			printf("오답입니다. \n");	
	}
	else if(opt==2)
	{
		printf("난이도를 '중간' 으로 설정하셨습니다. \n");
		printf("문제입니다. \n");
		printf("삼포세대는 경제불황 때문에 생긴 말로 연애, 결혼 그리고 이것을 포기한 세대를 뜻한다. 이것은? \n");
		printf("1. 출산 \n");
		printf("2. 취업 \n");
		printf("3. 여가 \n");
		printf("4. 효도 \n");
		printf("답은? ");
		scanf("%d", &num);
		if(num==1)
		{
			printf("정답입니다! \n\n\n\n\n");
			printf("다음 문제입니다. \n");
			printf("손버릇이 나쁘다를 영어로 'have 이것 finfgers'라고 하는데 이것은? \n");
			printf("1. sticky(끈적거리는) \n");
			printf("2. smooth(매끈한) \n");
			printf("3. smelly(냄새나는) \n");
			printf("4. bad(나쁜) \n");
			printf("답은? ");
			scanf("%d", &no);
			if(no==1)
			{
				printf("정답입니다! \n\n\n\n\n");
				printf("다음 문제입니다. \n");
				printf("다음 중 사람 이름인것은? \n");
				printf("1. 오르세 미술관의 '오르세' \n");
				printf("2. 피사의 사탑의 '피사' \n");
				printf("3. 에펠탑의 '에펠' \n");
				printf("4. 모아이 석상의 '모아이' \n");
				printf("답은? ");
				scanf("%d", &a);
				if(a==3)
				{
					printf("정답입니다! \n\n\n\n\n");
					printf("다음 문제입니다. \n");
					printf("토익의 최고 점수는 990점이다. 그렇다면 최저는?? \n");
					printf("1. 0 \n");
					printf("2. 5 \n");
					printf("3. 10 \n");
					printf("4. 20 \n");
					printf("답은? ");
					scanf("%d", &b);
					if(b==3)
					{
						printf("정답입니다! \n\n\n\n\n");
						printf("다음 문제입니다. \n");
						printf("'사람이 차에 치였다. 를 줄이면? \n");
						printf("1. 붕어빵 \n");
						printf("2. 소보루빵 \n");
						printf("3. 으앙듀금 \n");
						printf("4. 찹살떡 \n");
						printf("답은? ");
						scanf("%d", &c);
						if(c==1)
						{
							printf("정답입니다! \n\n\n\n\n");
							printf("다음 문제입니다. \n");
							printf("남자쇼트트랙 계주에 있는 종목은? \n");
							printf("1. 3000m \n");
							printf("2. 4000m \n");
							printf("3. 5000m \n");
							printf("4. 6000m \n");
							printf("답은? ");
							scanf("%d", &d);
							if(d==3)
							{
								printf("정답입니다! \n\n\n\n\n");
								printf("다음 문제입니다. \n");
								printf("동요 뽀뽀뽀에서 뽀뽀뽀는 몇번?? \n");
								printf("1. 5번 \n");
								printf("2. 6번 \n");
								printf("3. 7번 \n");
								printf("4. 8번 \n");
								printf("답은? ");
								scanf("%d", &e);
								if(e==3)
								{
									printf("정답입니다! \n\n\n\n\n");
									printf("다음 문제입니다. \n");
									printf("네트가 없는 경기는? \n");
									printf("1. 배구 \n");
									printf("2. 피구 \n");
									printf("3. 탁구 \n");
									printf("4. 축구 \n");
									printf("답은? ");
									scanf("%d", &f);
									if(f==2)
									{
										printf("정답입니다! \n\n\n\n\n");
										printf("다음 문제입니다. \n");
										printf("태평양에서는 우리나라 인물을 딴 지명이 있다. 그 인물은?\n");
										printf("1. 장보고 \n");
										printf("2. 이순신 \n");
										printf("3. 세종 \n");
										printf("4. 사도세자 \n");
										printf("답은? ");
										scanf("%d", &g);
										if(g==1)
										{
											printf("정답입니다! \n\n\n\n\n");
											printf("다음 문제입니다. \n");
											printf("가축이 아닌 것은? \n");
											printf("1. 지렁이 \n");
											printf("2. 개 \n");
											printf("3. 귀뚜라미 \n");
											printf("4. 꿀벌 \n");
											printf("답은? ");
											scanf("%d", &h);
											if(h==3)
												printf("정답입니다! \n");
											else if(h==1)
												printf("오답입니다. \n");
											else if(h==2)
												printf("오답입니다. \n");
											else
												printf("오답입니다. \n");
										}
										else if(g==2)
											printf("오답입니다. \n");
										else if(g==3)
											printf("오답입니다. \n");
										else
											printf("오답입니다. \n");
									}
									else if(f==1)
										printf("오답입니다. \n");
									else if(f==3)
										printf("오답입니다. \n");
									else
										printf("오답입니다. \n");	
								}
								else if(e==2)
									printf("오답입니다. \n");
								else if(e==1)
									printf("오답입니다. \n");
								else
									printf("오답입니다. \n");	
							}
							else if(d==1)
								printf("오답입니다. \n");
							else if(d==2)
								printf("오답입니다. \n");
							else
								printf("오답입니다. \n");	
						}
						else if(c==2)
							printf("오답입니다. \n");
						else if(c==3)
							printf("오답입니다. \n");
						else
							printf("오답입니다. \n");	
					}
					else if(b==1)
						printf("오답입니다. \n");
					else if(b==2)
						printf("오답입니다. \n");
					else
						printf("오답입니다. \n");
				}
				else if(a=1)					
				printf("오답입니다. \n");
				else if(a=2)
					printf("오답입니다. \n");
				else
					printf("오답입니다. \n");	
			}
			else if(no==2)
				printf("오답입니다. \n");
			else if(no==3)
				printf("오답입니다. \n");
			else
				printf("오답입니다. \n");	
		}
		else if(num==2)
			printf("오답입니다. \n");
		else if(num==3)
			printf("오답입니다. \n");
		else
			printf("오답입니다. \n");
	}
	else
	{
		printf("난이도를 '어려움' 으로 설정하셨습니다. \n");
		printf("문제입니다. \n");
		printf("-메이저리그에서 최초로 영구결번을 선물받은 선수와 등번호는? \n");
		printf("1. 뉴욕 양키스의 '루게릭' 4번 \n");
		printf("2. 뉴욕 양키스의 '베이스 루스' 3번 \n");
		printf("3. 뉴욕 양키스의 '조 디마지오' 5번 \n");
		printf("4. 뉴욕 양키스의 '요기베라' 8번 \n");
		printf("답은? ");
		scanf("%d", &num);
		if(num==1)
		{
			printf("정답입니다! \n\n\n\n\n");
			printf("다음 문제입니다. \n");
			printf("다음 중 맞춤법에 맞는 표현의 갯수는? \n '어따 대고/ 얻다 대고' 에서 얻다 대고 \n '설레임/ 설렘' 에서 설레임 \n '왠지 / 웬지'에서 왠지  \n");
			printf("1. 0 \n");
			printf("2. 1 \n");
			printf("3. 2 \n");
			printf("4. 3 \n");
			printf("답은? ");
			scanf("%d", &no);
			if(no==3)
			{
				printf("정답입니다! \n\n\n\n\n");
				printf("다음 문제입니다. \n");
				printf("바둑판 한가운데의 점 또는 그 자리에 놓은 바둑돌을 일컫는 말은? \n");
				printf("1. 십원 \n");
				printf("2. 백원 \n");
				printf("3. 천원 \n");
				printf("4. 만원 \n");
				printf("답은? ");
				scanf("%d", &a);
				if(a==3)
				{
					printf("정답입니다! \n\n\n\n\n");
					printf("다음 문제입니다. \n");
					printf("단돈 한푼도 없다라는 표현은 영어로 <not have a (   ) cent>라고 쓴다. 빈칸은?? \n");
					printf("1. blue \n");
					printf("2. red \n");
					printf("3. black \n");
					printf("4. yellow \n");
					printf("답은? ");
					scanf("%d", &b);
					if(b==2)
					{
						printf("정답입니다! \n\n\n\n\n");
						printf("다음 문제입니다. \n");
						printf("피사의 사탑의 계단수는? \n");
						printf("1. 294개 \n");
						printf("2. 297개 \n");
						printf("3. 300개 \n");
						printf("4. 303개 \n");
						printf("답은? ");
						scanf("%d", &c);
						if(c==2)
						{
							printf("정답입니다! \n\n\n\n\n");
							printf("다음 문제입니다. \n");
							printf("모차렐라 치즈가 처음 만들어진 것으로 알려진 12세기경에는 이것의 젖으로 만들었는데 이것은? \n");
							printf("1. 낙타 \n");
							printf("2. 염소 \n");
							printf("3. 물소 \n");
							printf("4. 사슴 \n");
							printf("답은? ");
							scanf("%d", &d);
							if(d==3)
							{
								printf("정답입니다! \n\n\n\n\n");
								printf("다음 문제입니다. \n");
								printf("다음중에서 <부치는>것은?) \n");
								printf("1. 우표 \n");
								printf("2. 짐 \n");
								printf("3. 밥풀 \n");
								printf("4. 불 \n");
								printf("답은? ");
								scanf("%d", &e);
								if(e==2)
								{
									printf("정답입니다! \n\n\n\n\n");
									printf("다음 문제입니다. \n");
									printf("감정을 유발하여 경쟁의식을 유발하는 효과는?? \n");
									printf("1. 쉬리 효과 \n");
									printf("2. 메기 효과 \n");
									printf("3. 뱀장어 효과 \n");
									printf("4. 꼼장어 효과 \n");
									printf("답은? ");
									scanf("%d", &f);
									if(f==2)
									{
										printf("정답입니다! \n\n\n\n\n");
										printf("다음 문제입니다. \n");
										printf("한국 대통령의 아호중 어리석은 집이라는 별칭을 가진 대통령은? \n");
										printf("1. 노태우 \n");
										printf("2. 김영삼 \n");
										printf("3. 이명박 \n");
										printf("4. 박근혜 \n");
										printf("답은? ");
										scanf("%d", &g);
										if(g==1)
										{
											printf("정답입니다! \n\n\n\n\n");
											printf("다음 문제입니다. \n");
											printf("펭귄이 사는 곳에 있는 과학기지는? \n");
											printf("1. 목민심서를 쓴 자 \n");
											printf("2. 한글 창제한 자 \n");
											printf("3. 청해진과 관련된 자 \n");
											printf("4. 거중기를 만든 자 \n");
											printf("답은? ");
											scanf("%d", &h);
											if(h==1)
												printf("정답입니다! \n");
											else if(h==2)
												printf("오답입니다. \n");
											else if(h==3)
												printf("오답입니다. \n");
											else
												printf("오답입니다. \n");
										}
										else if(g==2)
											printf("오답입니다. \n");
										else if(g==3)
											printf("오답입니다. \n");
										else
											printf("오답입니다. \n");
									}
									else if(f==2)
										printf("오답입니다. \n");
									else if(f==1)
										printf("오답입니다. \n");
									else
										printf("오답입니다. \n");	
								}
								else if(e==2)
									printf("오답입니다. \n");
								else if(e==1)
									printf("오답입니다. \n");
								else
									printf("오답입니다. \n");	
							}
							else if(d==2)
								printf("오답입니다. \n");
							else if(d==1)
								printf("오답입니다. \n");
							else
								printf("오답입니다. \n");	
						}
						else if(c==1)
							printf("오답입니다. \n");
						else if(c==3)
							printf("오답입니다. \n");
						else
							printf("오답입니다. \n");	
					}
					else if(b==1)
						printf("오답입니다. \n");
					else if(b==3)
						printf("오답입니다. \n");
					else
						printf("오답입니다. \n");
				}
				else if(a==1)
					printf("오답입니다. \n");
				else if(a==2)
					printf("오답입니다. \n");
				else
					printf("오답입니다. \n");	
			}
			else if(no==1)
				printf("오답입니다. \n");
			else if(no==2)
				printf("오답입니다. \n");
			else
				printf("오답입니다. \n");	
		}
		else if(num==2)
			printf("오답입니다. \n");
		else if(num==3)
			printf("오답입니다. \n");
		else
			printf("오답입니다. \n");
	}
	system("pause");
}
