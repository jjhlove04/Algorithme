#include <iostream>
#include <algorithm>

using namespace std;

//�������� ������ �����ϰ� �ִ� ��ü Student ����
class Student {
public:
    string name;
    int score;
    //������ = ��ü�� �ʱ�ȭ �ϱ� ���� ���
    Student(string name, int score)
    {
        this->name;
        this->score;
    }
    //�ٸ� �л��� ���Ͽ� �� ������ ���ٸ� ����
    bool operator < (Student& student)
    {
        return this->score < student.score;
    }
};

int main(void)
{
    Student students[] =
    {
        Student("����ȿ", 90),
        Student("JeongH", 92),
        Student("JinHyo", 87)
    };

    sort(students, students + 3);

    for (int i = 0; i < 3; i++)
    {
        cout << students[i].name << endl;
    }
  
}

