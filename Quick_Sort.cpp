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
	if (start >= end) //원소가 1개인 경우
	{
		return;
	}

	int pivot = start; //피벗값(첫번째 원소)
	int i = start + 1; //피벗값에서 오른쪽으로 1칸씩 이동하기 위해서 + 1 을 해줌
	int j = end; //맨 마지막 인덱스에서 왼쪽으로 이동하기 위한 변수
	int temp; //자리 변환을 위한 temp변수

	while (i <= j) //엇갈릴때까지 반복하는 로직. 엇갈리는 경우 == 정렬이 완료됨 왼쪽부터 출발해서 오른쪽에서 ㅊ풀발한것 보다 작을때까지
	{
		while (data[i] <= data[pivot]) //피벗보다 큰값을 만날때까지 => 오른쪽 진행
		{
			i++;
		}
		while (data[j] >= data[pivot] && j > start) //피벗보다 작은값을 만날때까지 => 왼쪽 진행 && 예외처리 만약 가장 작은 원소일경우 딱 그 원소까지만 진행할수 있도록 제한
		{
			j--;
		}
		if (i > j)//엇갈린다면
		{
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
			//키값 교체
		}
		else//엇갈리지 않으면 그냥 큰값 작은값 교체
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}

	QuickSort(data, start, j - 1); //바깥으로 나가는경우 왼쪽
	QuickSort(data, j + 1, end); //오른쪽 퀵정렬 다시 수행


}