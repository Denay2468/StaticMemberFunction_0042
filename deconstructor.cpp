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