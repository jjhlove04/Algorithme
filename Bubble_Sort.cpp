#include <iostream>
#include <stdio.h>

int main()
{
	int i, j, temp; //�ݺ����� �� ���� i, j �׸��� �� ���� ġȯ���� ���� temp
	int array[10] = { 3,2,6,7,4,1,8,10,9,5 }; //�迭�� 10�� �־��ش�.
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++) //�����ʳ�(����ū��) �� �� �� ���ư��鼭 �ϳ��� ���̴� ����
		{
			if (array[j] > array[j + 1]) //���ϴ� �ε����� �ٷ� �� �ε����� ��
			{ //���� ���ʿ� �ִ°� �����ʺ��� ũ�ٸ� ����.
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	//����� ���� for��
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}