#include <iostream>
using namespace std;

class Student
{
public:
    Student(int id, string name);
};

Student::Student(int id, string name)
{
    cout<< "Contructor with parameters" << endl;
    cout << "ID   : " << id << endl;
    cout << "Name : " << name << endl;
    cout << endl;
}

int main()
{
    Student s1(12345, "Pascal");

    return 0;
}