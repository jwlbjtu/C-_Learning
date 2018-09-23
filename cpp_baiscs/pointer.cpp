#include<iostream>
using namespace std;

int main() {
    int i = 10;

    int * p = &i;

    cout << p << endl;

    int a = 7;
    int b = 17;

    int *c = &b;
    a = *c;
    *c = *c + 1;

    cout << a << " " << b << endl;
    cout << c;

    cout << endl;

    char ch = 'a';
    char * ptr = &ch;
    ch++;
    cout << *ptr << endl;
    return 0;
}