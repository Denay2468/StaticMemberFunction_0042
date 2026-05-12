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

// assign a value to the studentID variable from the Student class
int Student::studentID = 10;

// implementing procedures - procedures outside the class
void Student::setID() {
    id = ++studentID;
};

void Student::printAll() {
    cout << "ID   : " << id << endl;
    cout << "Name : " << name << endl;
    cout << endl;
};

int main() {
    // creating objects and assigning values
    Student s1("Lia Kurnia");
    Student s2("Asroni");
    Student s3("Andi Kurniawan");
    Student s4("Joko Punho");  // partially visible
}