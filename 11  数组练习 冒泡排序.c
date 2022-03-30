#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble()
{
	//利用冒泡排序实现升序序列
	int arr[9] = { 9,8,7,6,5,4,3,2,1 };
	printf("排序前：");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//开始冒泡排序
	//总共排序轮数为;元素个数-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比次数 = 元素个数-当前轮数 - 1
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("排序后的结果：");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main11() {

	bubble();

	system("pause");

	return 0;
}