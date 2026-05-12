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

Student :: Student(){
}

Student :: Student(int iStudentId){
    studentId = iStudentId; // definition for ID only
}

Student :: Student(string iName){
    name = iName; // definition for NAME only
}

Student :: Student(int iStudentId, string iName){
    studentId = iStudentId; // definition for ID and NAME
    name = iName;
}

void Student::print(){
    cout << endl << "Student ID = " << studentId << endl;
    cout << "Name = " << name << endl;
}