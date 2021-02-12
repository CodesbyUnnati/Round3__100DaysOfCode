#include <iostream>
using namespace std;
class Person
{
    int id;
    char name[50];

public:
    void aboutMe()
    {
        cout << "I am a person.\n";
    }
};
class Student : public Person
{

public:
    void aboutMe()
    {
        cout << "I am a Student.\n";
    }
};
int main()
{
    Student *p;
    p->aboutMe();
    return 0;
}
