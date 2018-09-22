#include<iostream>
using namespace std;

void printHello(); // forward declaretion

void printWorld() {
    cout << "world";
}

int main() {
    printHello();
    printWorld();
}

void printHello() {
    cout << "Hello" << endl;
}