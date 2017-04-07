#include"header.h"
int main()
{
	int plnum, pcnum, plbet,pcbet=5;
	short money = 25,pcmoney = 25;
	char c=0;
	srand((unsigned)time(NULL));
	while (1)
	{
		system("cls");
		gotoxy(50, 0);
		printf("you have %d", money);
		gotoxy(50, 1);
		printf("pc has %d", pcmoney);
		gotoxy(0, 0);

			plnum = rand() % 10;//플레이어의 카드
			pcnum = rand() % 10;//컴퓨터의 카드

		printf("pc=%d\n", pcnum);//컴퓨터의 카드를 출력
		printf("what do you want to do?\n1.bet\n2.die\n");//행동을 입력받음
		scanf("%d", &c);
		while (1)
		{
			if (c == 1)//베팅
			{
				pcbet = rand() % 25;//컴퓨터 배팅;랜덤 함수
				printf("pc has bet %d\n\nyour money=%d\n\n",pcbet, money);
				printf("How much?\n");
				scanf("%d", &plbet);

				//결과 체크
				printf("your card was %d\n", plnum);
				if (plnum > pcnum)
				{
					pcmoney -= pcbet;
					money += pcbet;
					printf("player win!");
				}
				else if (pcnum > plnum)
				{
					pcmoney += plbet;
					money -= plbet;
					printf("pc win!");
				}
				else
					printf("dead heart!");
				getch();

				break;
			}//베팅 끝
			else if (c == 2)//다이
			{
				printf("your card was %d\n", plnum);
				printf("computer win!");
				getch();
				break;
			}
			else
				break;
		}

	}

}