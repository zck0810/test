#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble()
{
	//����ð������ʵ����������
	int arr[9] = { 9,8,7,6,5,4,3,2,1 };
	printf("����ǰ��");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//��ʼð������
	//�ܹ���������Ϊ;Ԫ�ظ���-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//�ڲ�ѭ���Աȴ��� = Ԫ�ظ���-��ǰ���� - 1
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("�����Ľ����");
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