# include<iostream>
using namespace std;

int main() 
{
    /*
    int i;
    cin >> i;

    if (i > 5) {
        cout << "Greater" << endl;
    } else {
        cout << "Less" << endl;
    }*/

    int a = 1;
    if (5 % 2 && a++) {
        cout << "In If " << endl;
        cout << a << endl; // 2
    }else {
        cout << a << endl;
    }

    a = 1;
    if (5 % 2 || a++) {
        cout << a << endl; // 1
    } else {
        cout << a << endl;
    }

    a = 1;
    if (6 % 2 && a++) {
        cout << a << endl; // 1
    }else {
        cout << a << endl;
    }

    a = 1;
    if (6 % 2 || a++) {
        cout << a << endl; // 2
    }else {
        cout << a << endl;
    }

    int n = 3;
    n == 2 ? cout << 1 : cout << 0;

    return 0;
}