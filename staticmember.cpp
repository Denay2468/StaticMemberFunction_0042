#include <iostream>
using namespace std;

class Book
{
    string title;  // private member variable

public:
    string setget(string title)
    {
        this->title = title;  // assigns the parameter 'title' to the member variable
        return this->title;   // returns the member variable title
    }
};

int main()
{
    Book myBook;  // creates an object of class Book
    cout << myBook.setget("Mathematics");
    return 0;
}