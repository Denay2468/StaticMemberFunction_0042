#include <iostream>
#include <string>  
using namespace std;

class Student {

private:
    static int studentID;

public:
    int id;
    string name;

    void setID();
    void printAll();

    static void setStudentID(int pStudentID) {
        studentID = pStudentID;
    };

    static int getStudentID() {
        return studentID;  
    }

    Student(string pname) : name(pname) {
        setID();
    };
};

int Student::studentID = 0;


void Student::setID() {
    id = ++studentID;
}

void Student::printAll() {
    cout << "ID = " << id << endl;
    cout << "Name = " << name << endl;
    cout << endl;
}

int main() {
    
    Student s1("Sri Dadi");
    Student s2("Budi Jatmiko");
   
    Student::setStudentID(9);

    Student s3("Andi Janu");
    Student s4("Joko Wahono");

    s1.printAll();
    s2.printAll();
    s3.printAll();
    s4.printAll();

    cout << "Current Student ID : " << Student::getStudentID() << endl;
    system("pause");

    return 0;
}
