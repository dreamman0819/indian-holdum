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

			plnum = rand() % 10;//�÷��̾��� ī��
			pcnum = rand() % 10;//��ǻ���� ī��

		printf("pc=%d\n", pcnum);//��ǻ���� ī�带 ���
		printf("what do you want to do?\n1.bet\n2.die\n");//�ൿ�� �Է¹���
		scanf("%d", &c);
		while (1)
		{
			if (c == 1)//����
			{
				pcbet = rand() % 25;//��ǻ�� ����;���� �Լ�
				printf("pc has bet %d\n\nyour money=%d\n\n",pcbet, money);
				printf("How much?\n");
				scanf("%d", &plbet);

				//��� üũ
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
			}//���� ��
			else if (c == 2)//����
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