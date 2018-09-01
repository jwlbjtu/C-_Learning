# include<iostream>
using namespace std;

int main()
{
    int fah;
    cin >> fah;

    int cel = (5 / 9) * (fah - 32);

    cout << cel << endl;

    cel = (5.0 / 9) * (fah - 32);

    cout << cel << endl;

    return 0;
}