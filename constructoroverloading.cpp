#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int studentId;
        string name;
    public:
        Student();
        Student(int);
        Student(string);
        Student(int iStudentId, string iName);
        void print();
};