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

    // creating a static function
    static void setStudentID(int pStudentID) {
        studentID = pStudentID;
    };

    static int getStudentID() {
        return studentID;  
    }
};