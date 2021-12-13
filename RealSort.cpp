#include <iostream>
#include <algorithm>

using namespace std;

//여러개의 정보를 포함하고 있는 객체 Student 생성
class Student {
public:
    string name;
    int score;
    //생성자 = 객체를 초기화 하기 위해 사용
    Student(string name, int score)
    {
        this->name;
        this->score;
    }
    //다른 학생과 비교하여 내 점수가 높다면 리턴
    bool operator < (Student& student)
    {
        return this->score < student.score;
    }
};

int main(void)
{
    Student students[] =
    {
        Student("정진효", 90),
        Student("JeongH", 92),
        Student("JinHyo", 87)
    };

    sort(students, students + 3);

    for (int i = 0; i < 3; i++)
    {
        cout << students[i].name << endl;
    }
  
}

