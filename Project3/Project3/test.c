
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		printf("��������Ϸ\n");
		printf("ѡ��=");
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:  game(); break;
		default: printf("��Ϸ����\n");
		}
	} while (a);
	return 0;
}
int game()
{
	int ret = rand() % 100 + 1;
	int b = 0;
	while (1)
	{
		printf("��������=");
		scanf_s("%d", &b);
		if (b > ret)
			printf("�´���\n");
		else if (b < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
		return 0;
	}