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

int main(){
    book mybook;
    cout << mybook.settitle("Mathematics").gettitle();
    return 0;
}