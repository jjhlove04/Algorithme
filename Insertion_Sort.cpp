//#include <iostream>
//#include <stdio.h>
//
//int main()
//{
//	int i, j, temp;
//	int array[10] = { 1,10,5,8,7,6,9,4,3,2 };
//
//	for (i = 0; i < 9; i++)
//	{
//		j = i; //���� ���Ҹ� ������ ��ġ�� �ֱ� ���ؼ�
//		while (j >= 0 && array[j] > array[j + 1]) //j�� �� ���� �ִ� ���� ���ؼ� �� ũ��
//		{
//			temp = array[j];
//			array[j] = array[j + 1];
//			array[j + 1] = temp;
//			j--; //j--�� ���ִ� ������ ��� �������� ���� ���ϱ� ���ؼ� ���ִ°�
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", array[i]);
//	}
//
//
//	return 0;
//
//}