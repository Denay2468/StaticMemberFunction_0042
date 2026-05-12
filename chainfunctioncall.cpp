#include <iostream>
using namespace std;
class book{
    string title;
public:
    book settitle(string title){
        this->title = title;
        return *this;
    }
    string gettitle(){
        return this->title;
    }
};

