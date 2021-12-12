#include <iostream>

int main()
{
    int i, j, min, index, temp;
    int array[10] = { 1,2,3,4,5,6,7,8,9,10 }; //10개 원소들을 담는 배열
    //순차적으로 for문 돌려
    for (i = 0; i < 10; i++)
    {
        //min값은 임의의 값을 넣어놓는다.
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
        //치환
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;

    }
    return 0;
}