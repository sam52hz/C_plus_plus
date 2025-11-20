#include <iostream>
using namespace std;

int main ()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 != 0) 
    {
        cout << "Odd" << endl;
    }
    else 
    {
        cout<<"Please enter new input"<<endl;
    }

    return 0;
}