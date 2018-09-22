#include<iostream>
using namespace std;

int x = 12;

int main()
{
    int a = 1;
    int b = 5;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int x = 10;

    cout << "local x = " << x << endl;
    cout << "global x = " << ::x << endl; 

    return 0;
}