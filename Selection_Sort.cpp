#include <iostream>

int main()
{
    int i, j, min, index, temp;
    int array[10] = { 1,2,3,4,5,6,7,8,9,10 }; //10�� ���ҵ��� ��� �迭
    //���������� for�� ����
    for (i = 0; i < 10; i++)
    {
        //min���� ������ ���� �־���´�.
        min = 9999;
        //
        for (j = i; j < 10; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;

            }
        }
        //ġȯ
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;

    }
    return 0;
}