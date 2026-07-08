#include <iostream>
using namespace std;

// Each person will perform those function which will be assigned to them that's it

void addition();
void subtraction();
void multiplication();

int main()
{
    cout << "Calculator Program\n";

    addition();
    subtraction();
    multiplication();
    return 0;
}

void addition()
{
    int a = 10,b = 5;
    cout << "Addition = "<< a + b<< endl;
   // addition function is added by 
}
void multiplication()
{
    int a = 10;
    int b = 5;

    cout << "Multiplication = "
         << a * b
         << endl;
}
