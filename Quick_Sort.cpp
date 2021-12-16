#include <iostream>

int main()
{
	int number = 10;
	int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

	QuickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++)
	{
		printf("%d ", data[i]);
	}

}
void QuickSort(int* data, int start, int end)
{
	if (start >= end) //���Ұ� 1���� ���
	{
		return;
	}

	int pivot = start; //�ǹ���(ù��° ����)
	int i = start + 1; //�ǹ������� ���������� 1ĭ�� �̵��ϱ� ���ؼ� + 1 �� ����
	int j = end; //�� ������ �ε������� �������� �̵��ϱ� ���� ����
	int temp; //�ڸ� ��ȯ�� ���� temp����

	while (i <= j) //������������ �ݺ��ϴ� ����. �������� ��� == ������ �Ϸ�� ���ʺ��� ����ؼ� �����ʿ��� ��Ǯ���Ѱ� ���� ����������
	{
		while (data[i] <= data[pivot]) //�ǹ����� ū���� ���������� => ������ ����
		{
			i++;
		}
		while (data[j] >= data[pivot] && j > start) //�ǹ����� �������� ���������� => ���� ���� && ����ó�� ���� ���� ���� �����ϰ�� �� �� ���ұ����� �����Ҽ� �ֵ��� ����
		{
			j--;
		}
		if (i > j)//�������ٸ�
		{
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
			//Ű�� ��ü
		}
		else//�������� ������ �׳� ū�� ������ ��ü
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}

	QuickSort(data, start, j - 1); //�ٱ����� �����°�� ����
	QuickSort(data, j + 1, end); //������ ������ �ٽ� ����


}