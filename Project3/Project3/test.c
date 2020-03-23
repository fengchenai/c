
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		printf("猜数字游戏\n");
		printf("选择=");
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:  game(); break;
		default: printf("游戏结束\n");
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
		printf("输入数字=");
		scanf_s("%d", &b);
		if (b > ret)
			printf("猜大了\n");
		else if (b < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
		return 0;
	}