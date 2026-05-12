#include <iostream>
using namespace std;

class Student {  

public:
    static int studentID;  
    int id;
    string name;

    
    void setID();
    void printAll();

    Student(string pname) : name(pname) {
        setID();
    }
};

int Student::studentID = 10;


void Student::setID() {
    id = ++studentID;
};

void Student::printAll() {
    cout << "ID   : " << id << endl;
    cout << "Name : " << name << endl;
    cout << endl;
};

int main() {
    Student s1("Lia Kurnia");
    Student s2("Asroni");
    Student s3("Andi Kurniawan");
    Student s4("Joko Punho");  

    s1.printAll();
    s2.printAll();
    s3.printAll();
    s4.printAll();

    return 0;
}