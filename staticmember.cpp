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