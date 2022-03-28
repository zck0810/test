#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*******************************\n");
	printf("****  1 play      0 exit  *****\n");
	printf("*******************************\n");
}

void game()
{
	//1、生成一个随机数
	int guess = 0;
	int ret = 0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time_t *timer)
	ret = rand()%100+1; //生成随机数
	//printf("%d\n", ret);

	while (1)
	{
		printf("请输入猜的数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了 \n");
			break;
		}
	}
}

int main7()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入>:");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game(); //猜数字游戏
				break;
			case 0:
				printf("退出游戏 \n");
				break;
			default :
				printf("选择错误 \n");
				break;
		}

	} while (input);

	return 0;
}