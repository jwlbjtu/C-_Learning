#include <iostream>
using namespace std;

int main()
{
    char c = 'a';
    cout << c + 3 << endl;

    char ch = 'A';

    ch = ch + 1;
    cout << ch << endl;

    int val = (int)ch;
    cout << val << endl;

    // Implicit bool -> char -> int -> float
    // explicit float -> int -> char -> bool

    return 0;
}