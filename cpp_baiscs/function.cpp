#include<iostream>
using namespace std;

void printHello(); // forward declaretion

void printWorld() {
    cout << "world";
}

void changeValue(int a, int b) {
    a = 10;
    b = 11;
}

int main() {
    printHello();
    printWorld();

    int a = 0;
    int b = 1;
    changeValue(a, b);
    cout << endl;
    cout << a << " " << b << endl;
}

void printHello() {
    cout << "Hello" << endl;
}