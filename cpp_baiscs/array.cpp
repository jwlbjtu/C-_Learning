#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int b[4] = {1, 2, 3, 4};

    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
    }

    int x = b[0];
    b[0] = b[2];
    b[2] = x;

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << b[i];
    }

    cout << endl;

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    return 0;
}