#include <iostream>
using namespace std;

class Number
{
private:
    int *arr;
    int length;

public:
    Number(int); // Constructor
    ~Number();   // Destructor
    void printData();
    void fillData();
};

Number::Number(int i){ // Constructor
    length = i;
    arr = new int[i];
    fillData();
}

Number::~Number(){ // Destructor
    cout << endl;
    printData();
    delete[] arr;
    cout << "Array Address Has Been Released" << endl;
}

void Number::printData()
{
    for (int i = 1; i <= length; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void Number::fillData()
{
    for (int i = 1; i <= length; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}