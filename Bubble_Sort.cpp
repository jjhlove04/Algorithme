#include <iostream>
#include <stdio.h>

int main()
{
	int i, j, temp; //반복문에 들어갈 변수 i, j 그리고 두 개를 치환해줄 변수 temp
	int array[10] = { 3,2,6,7,4,1,8,10,9,5 }; //배열에 10개 넣어준다.
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++) //오른쪽끝(제일큰수) 와 비교 해 나아가면서 하나씩 줄이는 로직
		{
			if (array[j] > array[j + 1]) //비교하는 인덱스와 바로 옆 인덱스를 비교
			{ //만약 왼쪽에 있는게 오른쪽보다 크다면 스왑.
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	//출력을 위한 for문
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}