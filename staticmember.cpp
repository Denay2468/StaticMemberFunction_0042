#include <iostream>
using namespace std;

class Book
{
    string title;  

public:
    string setget(string title)
    {
        this->title = title;  
        return this->title;   
    }
};

int main()
{
    Book myBook;  
    cout << myBook.setget("Mathematics");
    return 0;
}