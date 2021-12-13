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
//		j = i; //정한 원소를 적절한 위치에 넣기 위해서
//		while (j >= 0 && array[j] > array[j + 1]) //j가 그 옆에 있는 수와 비교해서 더 크면
//		{
//			temp = array[j];
//			array[j] = array[j + 1];
//			array[j + 1] = temp;
//			j--; //j--를 해주는 이유는 계속 왼쪽으로 가며 비교하기 위해서 해주는것
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