# include<iostream>
using namespace std;

int main()
{
    cout << (4 & 3) << endl;
    cout << (3 | 7) << endl;
    cout << (~5) << endl; // -6
    cout << (5 ^ 5) << endl;// 0
    cout << (5 ^ 0) << endl; // 5
    cout << ( 3 ^ 5 ^ 3) << endl; // 5

    /*
    a ^ a = 0
    a ^ 0 = a
    a ^ b ^ a = b
    */

   cout << (2 << 1) << endl; // x << y => x * 2^y
   cout << (2 >> 1) << endl; // x >> y => x / 2^y

    return 0;
}